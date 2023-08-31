TC_04_select_account_overview()
{

lr_start_transaction("TC_04_select_account_overview");

	web_url("overview.htm_2", 
		"URL={scheme}//{baseurl}/{path}/overview.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={scheme}//{baseurl}/{path}/openaccount.htm", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=images/gradhead.png", "Referer={scheme}//{baseurl}/{path}/style.css", ENDITEM, 
		"Url=images/gradback.png", "Referer={scheme}//{baseurl}/{path}/style.css", ENDITEM, 
		LAST);

	web_url("accounts_5", 
		"URL={scheme}//{baseurl}/{path}/services_proxy/bank/customers/{C_customer_id}/accounts", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={scheme}//{baseurl}/{path}/overview.htm", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("TC_04_select_account_overview", LR_AUTO);
	lr_think_time(think_time);
	return 0;
}
