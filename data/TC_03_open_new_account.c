TC_03_open_new_account()
{

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.5");

	lr_think_time(6);

	web_url("bullet2-hover.gif", 
		"URL=https://parabank.parasoft.com/parabank/images/bullet2-hover.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://parabank.parasoft.com/parabank/template.css", 
		"Snapshot=t17.inf", 
		LAST);

	lr_think_time(2);

	web_url("openaccount.htm_2", 
		"URL=https://parabank.parasoft.com/parabank/openaccount.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://parabank.parasoft.com/parabank/register.htm", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_url("accounts_4", 
		"URL=https://parabank.parasoft.com/parabank/services_proxy/bank/customers/12656/accounts", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://parabank.parasoft.com/parabank/openaccount.htm", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(10);

	web_custom_request("createAccount_2", 
		"URL=https://parabank.parasoft.com/parabank/services_proxy/bank/createAccount?customerId=12656&newAccountType=1&fromAccountId=13677", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://parabank.parasoft.com/parabank/openaccount.htm", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		LAST);

	return 0;
}
