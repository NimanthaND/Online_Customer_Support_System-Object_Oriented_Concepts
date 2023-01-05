#include "Issues.h"
#include "Services.h"
#include "Reservation.h"
class BusinessUser
{
private:
	//relationship of issues ----->Businuss User uni dirctional relationship 

	Issue* Issues1[size];

	//relationship of Service -------------Businuss User Bi-dirctional relationship

	Service* service[size];

	//relationship of Recervation -------------Businuss User Bi-dirctional relationship

	Reservation* recervation[size];
public:
	BusinussUser();
	BusinussUser(const char UserID[], const char Username[], const char Useraddress[], const char Userphone[], const char UserEmail[], const char UserNIC[], const char Userpassword[]);
	void setlogindetails(const char UserID[], const char Username[]);
	void createaccount(const char UserID[], const char Username[], const char Useraddress[], const char Userphone[], const char UserEmail[], const char UserNIC[]);
	void viewaccount();
	void Updateaccount();
	void PostService(Service* service1);
	~BusinussUser();

};

