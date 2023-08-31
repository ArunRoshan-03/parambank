TC_06_logout()
{
lr_start_transaction("TC_06_logout");

	web_url("logout.htm_2", 
		"URL={scheme}//{baseurl}/{path}/logout.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={scheme}//{baseurl}/{path}/transfer.htm", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

lr_end_transaction("TC_06_logout", LR_AUTO);
	lr_think_time(think_time);
	return 0;
}