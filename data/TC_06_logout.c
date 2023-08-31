TC_06_logout()
{

	web_add_header("Accept-Language", 
		"en-US,en;q=0.5");

	web_url("logout.htm_2", 
		"URL=https://parabank.parasoft.com/parabank/logout.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://parabank.parasoft.com/parabank/transfer.htm", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}