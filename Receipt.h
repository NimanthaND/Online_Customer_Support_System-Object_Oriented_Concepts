#pragma once
class Receipt
{
private:
	int receiptId;
	char issueDate[10];

public:
	Receipt();
	Receipt(int rID, char const iDate[]);
	void generateReceipt();
	void viewReceipt();
	~Receipt();
};

