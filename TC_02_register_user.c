TC_02_register_user()
{
lr_start_transaction("TC_02_register_user");
	
	randomnumber = rand() % 280; 
	lr_param_sprintf("p_random_number", "%04d", randomnumber);

	web_url("register.htm;jsessionid={C_jsession_id}", 
		"URL={scheme}//{baseurl}/{path}/register.htm;jsessionid={C_jsession_id}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={scheme}//{baseurl}/{path}/index.htm", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=images/header-main.jpg", ENDITEM, 
		LAST);

	lr_think_time(57);

	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=Your account was created successfully. You are now logged in.",
		LAST);

	web_submit_form("register.htm_3", 
		"Snapshot=t16.inf", 
		ITEMDATA, 
		"Name=customer.firstName", "Value={p_first_name}", ENDITEM, 
		"Name=customer.lastName", "Value={p_last_name}", ENDITEM, 
		"Name=customer.address.street", "Value={p_address}", ENDITEM, 
		"Name=customer.address.city", "Value={p_city}", ENDITEM, 
		"Name=customer.address.state", "Value={p_state}", ENDITEM, 
		"Name=customer.address.zipCode", "Value={p_zipcode}", ENDITEM, 
		"Name=customer.phoneNumber", "Value={p_phonenumber}", ENDITEM, 
		"Name=customer.ssn", "Value={p_ssn}", ENDITEM, 
		"Name=customer.username", "Value=user{p_random_number}", ENDITEM, 
		"Name=customer.password", "Value={p_password}", ENDITEM, 
		"Name=repeatedPassword", "Value={p_password}", ENDITEM, 
		EXTRARES, 
		"Url=images/header-customer.jpg", ENDITEM, 
		LAST);

lr_end_transaction("TC_02_register_user", LR_AUTO);
	lr_think_time(think_time);
	return 0;
}
