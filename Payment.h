#include<iostream>
#include<cstring>
#include "Receipt.h"
#include "Reservation.h"
#define size2 2
class Payment
{
private:
    int paymentID;
    char PaymentType[30];
    char PaymentDate[10];
    char PaymentDescription[60];
    float amount;
    Receipt* rcp[size];

public:
    Payment();
    Payment(int P_ID, const char P_Type[], const char P_Date[], const char P_Description[], float P_Amount);
    void addReceipt();
    void setPaymentID(int payID);
    void setPaymentType(const char patTyp[]);
    void setPaymentDate(const char payDate[]);
    void setPaymentdescription(const char payDesc[]);
    void setAmount(float amt);
    void ViewPayment();
    void genarateRecipt();
    float calculatePayment();
    void UpdatePayment();
    ~Payment();
};

