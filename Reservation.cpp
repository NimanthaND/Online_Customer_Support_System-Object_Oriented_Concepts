#include "Reservation.h"
#include <string>

Reservation::Reservation()
{
}

Reservation::Reservation(int rID, char const rType[], int rDay, int rMonth, int rYear)
{
	reservationID = rID;
	strcpy(reservationType, rType);
	reservationDay = rDay;
	reservationMonth = rMonth;
	reservationYear = rYear;

}

void Reservation::addPayment()
{
}

void Reservation::setReservationType(char const reservType[])
{
}

void Reservation::setReservationDate(int reservDay)
{
}

void Reservation::setReservationID(int reservID)
{
}

void Reservation::storeResevation()
{
}

void Reservation::updateReservation()
{
}

void Reservation::displayReservation()
{
}

void Reservation::deleteResrvation()
{
}

Reservation::~Reservation()
{
}
