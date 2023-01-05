#include "RegisteredUser.h"
#include <string>

RegisteredUser::RegisteredUser()
{
}

RegisteredUser::RegisteredUser(const char UserID[], const char Username[], const char Useraddress[], const char Userphone[], const char UserEmail[], const char UserNIC[], const char Userpassword[])
{
	strcpy(userID, UserID);
	strcpy(username, Username);
	strcpy(address, Useraddress);
	strcpy(phonenumber, Userphone);
	strcpy(Email, UserEmail);
	strcpy(NIC, UserNIC);
	strcpy(Password, Userpassword);

}

void RegisteredUser::setlogindetails(const char UserID[], const char Username[])
{
}

void RegisteredUser::createaccount(const char UserID[], const char Username[], const char Useraddress[], const char Userphone[], const char UserEmail[], const char UserNIC[])
{
}

void RegisteredUser::viewaccount()
{
}

void RegisteredUser::Updateaccount()
{
}

void RegisteredUser::setUserID(const char uID[])
{
}

void RegisteredUser::setUserName(const char uName[])
{
}

void RegisteredUser::setAddress(const char address[])
{
}

void RegisteredUser::setPhoneNumber(const char pNumber[])
{
}

void RegisteredUser::setEmail(const char uMail[])
{
}

void RegisteredUser::setPassword(const char password[])
{
}

void RegisteredUser::setNIC(const char uNIC[])
{
}

void RegisteredUser::getReport(Report* report)
{
}

void RegisteredUser::makeReservation(Reservation* reservation)
{
}

void RegisteredUser::ReportIssue()
{
}

RegisteredUser::~RegisteredUser()
{
}
