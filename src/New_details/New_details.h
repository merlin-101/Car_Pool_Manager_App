#ifndef NEW_DETAILS_H
#define NEW_DETAILS_H

#include "../inc/libraries.h" // includes the necessary structures and enums

struct CAR create_car(int id, const char *brand, const char *model, int seats, \
const char *licensePlate, enum engineType status, int currentAutonomy);

struct DRIVER create_driver(const char *name, const char *contact, const char *licenseNumber);

struct RESERVATION create_reservation(int carID, int driverID, struct DateTime pickupDate, struct DateTime dropoffDate);

#endif
