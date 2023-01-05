/*IT21097560
  Dissanayake D.S.N.N
  Malabe Campus
  01.02_06 Group*/

#include "Message.h"
#include "Issues.h"
#define size 2
class Agent
{
	int agentID;
	char agentName[50];
	int agentPhone;
	char agentEmail[50];
	//message pointer
	Message* msg[size];
	//issues pointer
	Issues* issu;

public:
	Agent();
	Agent(int aID, char const aName[], int aPhone, char const aEmail);
	void updateAgent();
	void deleteAgent();
	~Agent();
};

