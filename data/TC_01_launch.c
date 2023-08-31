TC_01_launch()
{

	web_add_header("Accept-Language", 
		"en-US,en;q=0.5");

	web_url("index.htm_2", 
		"URL=https://parabank.parasoft.com/parabank/index.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=images/main-bg.gif", "Referer=https://parabank.parasoft.com/parabank/template.css;jsessionid=674A7722E34A158EC308FF009F8B3FA3", ENDITEM, 
		"Url=images/topbg.gif", "Referer=https://parabank.parasoft.com/parabank/template.css;jsessionid=674A7722E34A158EC308FF009F8B3FA3", ENDITEM, 
		"Url=images/home-normal.gif", "Referer=https://parabank.parasoft.com/parabank/template.css;jsessionid=674A7722E34A158EC308FF009F8B3FA3", ENDITEM, 
		"Url=images/bullet-hover.gif", "Referer=https://parabank.parasoft.com/parabank/template.css;jsessionid=674A7722E34A158EC308FF009F8B3FA3", ENDITEM, 
		"Url=images/bodybg.gif", "Referer=https://parabank.parasoft.com/parabank/template.css;jsessionid=674A7722E34A158EC308FF009F8B3FA3", ENDITEM, 
		"Url=images/header-main.jpg;jsessionid=674A7722E34A158EC308FF009F8B3FA3", ENDITEM, 
		"Url=images/button-bgr.png", "Referer=https://parabank.parasoft.com/parabank/template.css;jsessionid=674A7722E34A158EC308FF009F8B3FA3", ENDITEM, 
		"Url=images/atmhand.jpg", "Referer=https://parabank.parasoft.com/parabank/template.css;jsessionid=674A7722E34A158EC308FF009F8B3FA3", ENDITEM, 
		"Url=images/bullet2-normal.gif", "Referer=https://parabank.parasoft.com/parabank/template.css;jsessionid=674A7722E34A158EC308FF009F8B3FA3", ENDITEM, 
		"Url=images/sky-color-bg.gif", "Referer=https://parabank.parasoft.com/parabank/template.css;jsessionid=674A7722E34A158EC308FF009F8B3FA3", ENDITEM, 
		"Url=images/icon2.jpg", "Referer=https://parabank.parasoft.com/parabank/template.css;jsessionid=674A7722E34A158EC308FF009F8B3FA3", ENDITEM, 
		"Url=images/icon4.jpg", "Referer=https://parabank.parasoft.com/parabank/template.css;jsessionid=674A7722E34A158EC308FF009F8B3FA3", ENDITEM, 
		"Url=images/footerbg.gif", "Referer=https://parabank.parasoft.com/parabank/template.css;jsessionid=674A7722E34A158EC308FF009F8B3FA3", ENDITEM, 
		"Url=../favicon.ico", ENDITEM, 
		"Url=images/aboutus-normal.gif", "Referer=https://parabank.parasoft.com/parabank/template.css;jsessionid=674A7722E34A158EC308FF009F8B3FA3", ENDITEM, 
		"Url=images/contact-normal.gif", "Referer=https://parabank.parasoft.com/parabank/template.css;jsessionid=674A7722E34A158EC308FF009F8B3FA3", ENDITEM, 
		"Url=images/bullet-normal.gif", "Referer=https://parabank.parasoft.com/parabank/template.css;jsessionid=674A7722E34A158EC308FF009F8B3FA3", ENDITEM, 
		LAST);

	web_websocket_send("ID=3", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1693364236626\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 3 received buffer WebSocketReceive1*/

	return 0;
}
