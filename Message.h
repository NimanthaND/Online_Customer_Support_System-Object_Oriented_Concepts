#include "RegisteredUser.h"
#include "Agent.h"
#define size 2
#define size2 2
class Message
{
private:
	int messageID;
	char messageName[20];
	RegisteredUser* user[size];
	Agent* agt[size2];
public:
	Message();
	Message(int mID, char const mName[]);
	void generateMessage();
	void sortMessage();
	void viewMessage();
	~Message();
};

