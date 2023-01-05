#include "RegisteredUser.h"
#include "BusinessUser.h"
class Services
{
private:
	int serviceID;
	char serviceType;
	BusinessUser * buser;

public:
	Services();
	Services(int sID, const char sType[]);
	void updateService();
	void displayService();
	void setserviceID(int servID);
	void setServiceType(const char servType);
	~Services();

};

