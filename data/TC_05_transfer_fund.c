TC_05_transfer_fund()
{

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.5");

	lr_think_time(14);

	web_url("transfer.htm_2", 
		"URL=https://parabank.parasoft.com/parabank/transfer.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://parabank.parasoft.com/parabank/overview.htm", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_url("accounts_6", 
		"URL=https://parabank.parasoft.com/parabank/services_proxy/bank/customers/12656/accounts", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://parabank.parasoft.com/parabank/transfer.htm", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(19);

	web_custom_request("transfer_2", 
		"URL=https://parabank.parasoft.com/parabank/services_proxy/bank/transfer?fromAccountId=13677&toAccountId=13788&amount=123456", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://parabank.parasoft.com/parabank/transfer.htm", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		LAST);

	return 0;
}
