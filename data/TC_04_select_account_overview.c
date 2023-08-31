TC_04_select_account_overview()
{

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.5");

	lr_think_time(11);

	web_url("overview.htm_2", 
		"URL=https://parabank.parasoft.com/parabank/overview.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://parabank.parasoft.com/parabank/openaccount.htm", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=images/gradhead.png", "Referer=https://parabank.parasoft.com/parabank/style.css", ENDITEM, 
		"Url=images/gradback.png", "Referer=https://parabank.parasoft.com/parabank/style.css", ENDITEM, 
		LAST);

	web_url("accounts_5", 
		"URL=https://parabank.parasoft.com/parabank/services_proxy/bank/customers/12656/accounts", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://parabank.parasoft.com/parabank/overview.htm", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
