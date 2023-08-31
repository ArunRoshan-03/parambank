TC_03_open_new_account()
{
lr_start_transaction("TC_03_open_new_account");
	
	web_reg_save_param_regexp(
		"ParamName=C_customer_id",
		"RegExp=services_proxy/bank/customers/(.*?)/accounts",
		SEARCH_FILTERS,
		LAST);

	web_reg_save_param_regexp(
		"ParamName=C_account_type",
		"RegExp=<option value=\"(.*?)\">",
		"Ordinal=All",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);

	web_url("openaccount.htm_2", 
		"URL={scheme}//{baseurl}/{path}/openaccount.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={scheme}//{baseurl}/{path}/register.htm", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);
	random_account_type=lr_paramarr_random("C_account_type");
	lr_param_sprintf("P_account_type","%s",random_account_type);	

/*Correlation comment - Do not change!  Original value='13677' Name ='C_account_id' Type ='Manual'*/
	web_reg_save_param_json(
		"ParamName=C_account_id",
		"QueryString=$.[0].id",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_url("accounts_4", 
		"URL={scheme}//{baseurl}/{path}/services_proxy/bank/customers/{C_customer_id}/accounts", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={scheme}//{baseurl}/{path}/openaccount.htm", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("createAccount_2", 
		"URL={scheme}//{baseurl}/{path}/services_proxy/bank/createAccount?customerId={C_customer_id}&newAccountType={P_account_type}&fromAccountId={C_account_id}", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={scheme}//{baseurl}/{path}/openaccount.htm", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		LAST);

lr_end_transaction("TC_03_open_new_account", LR_AUTO);
	lr_think_time(think_time);
	return 0;
}
