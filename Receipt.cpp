#include "Receipt.h"
#include <string>

Receipt::Receipt()
{
}

Receipt::Receipt(int rID, char const iDate[])
{
	receiptId = rID;
	strcpy(issueDate, iDate);

}

void Receipt::generateReceipt()
{
}

void Receipt::viewReceipt()
{
}

Receipt::~Receipt()
{
}
