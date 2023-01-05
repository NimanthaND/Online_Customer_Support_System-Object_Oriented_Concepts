#pragma once
#include "Issues.h"
#include "Message.h"
#include "Report.h"
#include "Reservation.h"
#define size 2
class RegisteredUser
{
private:
	//relationship of issues ----->Registered User uni dirctional relationship 

	Issues* Issues1[size];
	//relationship of Reservation ---------->Registered User bi-directional relationship

	Reservation* reservation[size];

	//relationship of Report ---------->Registered User Dependancy relationship

	Report* report[size];

	Message* msg;

	//create protected type properties 
	//use the properties use sub class type

protected:
	char userID[10];
	char username[20];
	char address[50];
	char phonenumber[20];
	char Email[200];
	char NIC[20];
	char Password[50];

public:
	//prototype of the funtion 
	RegisteredUser();
	RegisteredUser(const char UserID[], const char Username[], const char Useraddress[], const char Userphone[], const char UserEmail[], const char UserNIC[], const char Userpassword[]);
	virtual void setlogindetails(const char UserID[], const char Username[]);
	virtual void createaccount(const char UserID[], const char Username[], const char Useraddress[], const char Userphone[], const char UserEmail[], const char UserNIC[]);
	virtual void viewaccount();
	virtual void Updateaccount();
	void setUserID(const char uID[]);
	void setUserName(const char uName[]);
	void setAddress(const char address[]);
	void setPhoneNumber(const char pNumber[]);
	void setEmail(const char uMail[]);
	void setPassword(const char password[]);
	void setNIC(const char uNIC[]);
	void getReport(Report* report);
	void makeReservation(Reservation* reservation);
	void ReportIssue();
	~RegisteredUser();

};

