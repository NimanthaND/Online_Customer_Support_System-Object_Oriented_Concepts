#include "Payment.h"
#include <string>

Payment::Payment()
{
}

Payment::Payment(int P_ID, const char P_Type[], const char P_Date[], const char P_Description[], float P_Amount)
{
	paymentID = P_ID;
	strcpy(PaymentType, P_Type);
	strcpy(PaymentDate, P_Date);
	strcpy(PaymentDescription, P_Description);
	amount = P_Amount;

}

void Payment::addReceipt()
{
}

void Payment::setPaymentID(int payID)
{
}

void Payment::setPaymentType(const char patTyp[])
{
}

void Payment::setPaymentDate(const char payDate[])
{
}

void Payment::setPaymentdescription(const char payDesc[])
{
}

void Payment::setAmount(float amt)
{
}

void Payment::ViewPayment()
{
}

void Payment::genarateRecipt()
{
}

float Payment::calculatePayment()
{
	return 0.0f;
}

void Payment::UpdatePayment()
{
}

Payment::~Payment()
{
}
