#ifndef UPDATE_DETAILS_H
#define UPDATE_DETAILS_H

#include "../../inc/libraries.h" // includes the necessary structures and enums

void	update_car_details(struct CAR *car, const char *brand, const char *model, int seats, \
	const char *licensePlate, enum engineType status, int currentAutonomy);

void	update_driver_details(struct DRIVER *driver, const char *name, const char *contact, const char *licenseNumber);

void	update_reservation_details(struct RESERVATION *reservation, int carID, int driverID, \
	struct DateTime NewpickupDate, struct DateTime NewdropoffDate);

#endif
