#include "Message.h"
#include <string>

Message::Message()
{
}

Message::Message(int mID, char const mName[])
{
	messageID = mID;
	strcpy(messageName, mName);

}

void Message::generateMessage()
{
}

void Message::sortMessage()
{
}

void Message::viewMessage()
{
}

Message::~Message()
{
}
