#include "New_details.h"

struct RESERVATION create_reservation(int carID, int driverID, struct DateTime pickupDate, struct DateTime dropoffDate) {
	struct RESERVATION newReservation;
	newReservation.carID = carID;
	newReservation.driverID = driverID;
	newReservation.pickupDate = pickupDate;
	newReservation.dropoffdate = dropoffDate;

	return (newReservation);
};
