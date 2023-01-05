#include "Services.h"
#include <string>

Services::Services()
{
}

Services::Services(int sID, const char sType[])
{
	serviceID = sID;
	strcpy(serviceType, sType);
}

void Services::updateService()
{
}

void Services::displayService()
{
}

void Services::setserviceID(int servID)
{
}

void Services::setServiceType(const char servType)
{
}

Services::~Services()
{
}
