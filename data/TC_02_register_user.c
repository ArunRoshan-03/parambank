TC_02_register_user()
{

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.5");

	lr_think_time(13);

	web_url("register.htm;jsessionid=674A7722E34A158EC308FF009F8B3FA3", 
		"URL=https://parabank.parasoft.com/parabank/register.htm;jsessionid=674A7722E34A158EC308FF009F8B3FA3", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://parabank.parasoft.com/parabank/index.htm", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=images/header-main.jpg", ENDITEM, 
		LAST);

	lr_think_time(57);

	web_submit_form("register.htm_3", 
		"Snapshot=t16.inf", 
		ITEMDATA, 
		"Name=customer.firstName", "Value=Arun", ENDITEM, 
		"Name=customer.lastName", "Value=Kutty", ENDITEM, 
		"Name=customer.address.street", "Value=new street", ENDITEM, 
		"Name=customer.address.city", "Value=tamilnadu", ENDITEM, 
		"Name=customer.address.state", "Value=trichy", ENDITEM, 
		"Name=customer.address.zipCode", "Value=620001", ENDITEM, 
		"Name=customer.phoneNumber", "Value=1234567889", ENDITEM, 
		"Name=customer.ssn", "Value=1234567890", ENDITEM, 
		"Name=customer.username", "Value=demouser", ENDITEM, 
		"Name=customer.password", "Value=Atmecs@123", ENDITEM, 
		"Name=repeatedPassword", "Value=Atmecs@123", ENDITEM, 
		EXTRARES, 
		"Url=images/header-customer.jpg", ENDITEM, 
		LAST);

	return 0;
}
