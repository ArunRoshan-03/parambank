TC_05_transfer_fund()
{
lr_start_transaction("TC_05_transfer_fund");

	web_url("transfer.htm_2", 
		"URL={scheme}//{baseurl}/{path}/transfer.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={scheme}//{baseurl}/{path}/overview.htm", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

/*Correlation comment - Do not change!  Original value='13788' Name ='C_transfer_account_id' Type ='Manual'*/
	web_reg_save_param_json(
		"ParamName=C_transfer_account_id",
		"QueryString=$.[1].id",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_url("accounts_6", 
		"URL={scheme}//{baseurl}/{path}/services_proxy/bank/customers/{C_customer_id}/accounts", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={scheme}//{baseurl}/{path}/transfer.htm", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=Successfully transferred ",
		LAST);

	web_custom_request("transfer_2", 
		"URL={scheme}//{baseurl}/{path}/services_proxy/bank/transfer?fromAccountId={C_account_id}&toAccountId={C_transfer_account_id}&amount={p_amount}", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={scheme}//{baseurl}/{path}/transfer.htm", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		LAST);

lr_end_transaction("TC_05_transfer_fund", LR_AUTO);
	lr_think_time(think_time);
	return 0;
}
