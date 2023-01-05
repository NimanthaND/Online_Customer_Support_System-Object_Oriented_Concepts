/*IT21097560
  Dissanayake D.S.N.N
  Malabe Campus
  01.02_06 Group*/

#include "Agent.h"
#include <string>

Agent::Agent()
{
}

Agent::Agent(int aID, char const aName[], int aPhone, char const aEmail)
{
	agentID = aID;
	strcpy(agentName, aName);
	agentPhone = aPhone;
	strcpy(agentEmail, aEmail);

}

void Agent::updateAgent()
{
}

void Agent::deleteAgent()
{
}

Agent::~Agent()
{
}
