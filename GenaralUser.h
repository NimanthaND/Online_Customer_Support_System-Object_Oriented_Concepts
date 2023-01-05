#pragma once
class GenaralUser
{
private:

public:
	GenaralUser();
	GenaralUser(const char UserID[], const char Username[], const char Useraddress[], const char Userphone[], const char UserEmail[], const char UserNIC[], const char Userpassword[]);
	void setlogindetails(const char UserID[], const char Username[]);
	void createaccount(const char UserID[], const char Username[], const char Useraddress[], const char Userphone[], const char UserEmail[], const char UserNIC[]);
	void viewaccount();
	void Updateaccount();
	void search();
	~GenaralUser();

};

