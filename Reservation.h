#include <ctime>
#include "RegisteredUser.h"
#include "RegisteredUser.h"
#include "Payment.h"
#define size  2
#define size2 2

class Reservation
{
private:
	int reservationID;
	char reservationType[30];
	int reservationDay;
	int reservationMonth;
	int reservationYear;
	RegisteredUser * regU[size];
	Payment * pay[size2];

public:
	Reservation();
	Reservation(int rID, char const rType[], int rDay, int rMonth, int rYear);
	void addPayment();
	void setReservationType(char const reservType[]);
	void setReservationDate(int reservDay);
	void setReservationDate(int reservMonth);
	void setReservationDate(int reservYear);
	void setReservationID(int reservID);
	void storeResevation();
	void updateReservation();
	void displayReservation();
	void deleteResrvation();
	~Reservation();


};

