TC_01_launch()
{
	lr_start_transaction("TC_01_launch");

	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	web_reg_save_param_regexp(
		"ParamName=C_jsession_id",
		"RegExp=template.css;jsessionid=(.*?)\"",
		SEARCH_FILTERS,
		LAST);

	
	web_url("index.htm_2", 
		"URL={scheme}//{baseurl}/{path}/index.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=images/main-bg.gif", "Referer={scheme}//{baseurl}/{path}/template.css;jsessionid={C_jsession_id}", ENDITEM, 
		"Url=images/topbg.gif", "Referer={scheme}//{baseurl}/{path}/template.css;jsessionid={C_jsession_id}", ENDITEM, 
		"Url=images/home-normal.gif", "Referer={scheme}//{baseurl}/{path}/template.css;jsessionid={C_jsession_id}", ENDITEM, 
		"Url=images/bullet-hover.gif", "Referer={scheme}//{baseurl}/{path}/template.css;jsessionid={C_jsession_id}", ENDITEM, 
		"Url=images/bodybg.gif", "Referer={scheme}//{baseurl}/{path}/template.css;jsessionid={C_jsession_id}", ENDITEM, 
		"Url=images/header-main.jpg;jsessionid={C_jsession_id}", ENDITEM, 
		"Url=images/button-bgr.png", "Referer={scheme}//{baseurl}/{path}/template.css;jsessionid={C_jsession_id}", ENDITEM, 
		"Url=images/atmhand.jpg", "Referer={scheme}//{baseurl}/{path}/template.css;jsessionid={C_jsession_id}", ENDITEM, 
		"Url=images/bullet2-normal.gif", "Referer={scheme}//{baseurl}/{path}/template.css;jsessionid={C_jsession_id}", ENDITEM, 
		"Url=images/sky-color-bg.gif", "Referer={scheme}//{baseurl}/{path}/template.css;jsessionid={C_jsession_id}", ENDITEM, 
		"Url=images/icon2.jpg", "Referer={scheme}//{baseurl}/{path}/template.css;jsessionid={C_jsession_id}", ENDITEM, 
		"Url=images/icon4.jpg", "Referer={scheme}//{baseurl}/{path}/template.css;jsessionid={C_jsession_id}", ENDITEM, 
		"Url=images/footerbg.gif", "Referer={scheme}//{baseurl}/{path}/template.css;jsessionid={C_jsession_id}", ENDITEM, 
		"Url=../favicon.ico", ENDITEM, 
		"Url=images/aboutus-normal.gif", "Referer={scheme}//{baseurl}/{path}/template.css;jsessionid={C_jsession_id}", ENDITEM, 
		"Url=images/contact-normal.gif", "Referer={scheme}//{baseurl}/{path}/template.css;jsessionid={C_jsession_id}", ENDITEM, 
		"Url=images/bullet-normal.gif", "Referer={scheme}//{baseurl}/{path}/template.css;jsessionid={C_jsession_id}", ENDITEM, 
		LAST);

lr_end_transaction("TC_01_launch", LR_AUTO);
	lr_think_time(think_time);
	return 0;
}
