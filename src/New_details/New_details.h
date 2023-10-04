#ifndef NEW_DETAILS_H
#define NEW_DETAILS_H

#include "../../inc/libraries.h" // includes the necessary structures and enums

struct CAR* create_car();

struct DRIVER create_driver(const char *name, const char *contact, const char *licenseNumber);

struct RESERVATION create_reservation(int carID, int driverID, struct DateTime pickupDate, struct DateTime dropoffDate);

#endif
