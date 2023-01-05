/* MLB_01.02_06*/

#include <iostream>
#include <cstring>
#include "RegisteredUser.h"
#include "Reservation.h"
#include "Report.h"
#include "Issues.h"
#include "GenaralUser.h"
#include "BusinussUser.h"
#include "Payment.h"
#include "Services.h"
#include "Receipt.h"
#include "Message.h"
#include "Agent.h"
#include <string>

using namespace std;

int main()
{
	GenaralUser* G1 = new GenaralUser("UserID", "Username", "Useraddress", "Userphone", "UserEmail", "UserNIC", "Userpassword");//general user object
	
	BusinussUser* G2 = new BusinussUser("UserID", "Username", "Useraddress", "Userphone", "UserEmail", "UserNIC", "Userpassword");//Business user object


	Payment* p1 = new Payment("PaymentID", "paymentType", "Date", "Description", "1000.00");//payment object


	Reservation* r1 = new Reservation("0001", "credit", "31", "03", "31");//Reservation object


	Services* s1 = new Services("2001", "Hotel");//Services Object


	Issues* i1 = new Issues("2555", "reservation", "cant reserve");//Issues Object


	Report* rep1 = new Report("0000", "whatever.co");//Report object

	Agent* agt = new Agent("1111", "Sunil", "0772222222", "sunil@gmail.com");//Agent class

	Message* msg = new Message("333", "abc");//message class 

	Receipt* rcp = new Receipt("555", "22.08.2021");

	delete G1;//delete general user pointer 
	delete G2;//delete business user pointer 
	delete p1;//delete payment pointer 
	delete r1;//delete Reservation pointer 
	delete s1;//delete services pointer 
	delete i1;//delete issues pointer
	delete rep1;//delete report pointer
	delete agt;//delete agent pointer
	delete Msg;//delete message pointer
	delete Rcp;//delete receipt pointer

	return 0;

}
