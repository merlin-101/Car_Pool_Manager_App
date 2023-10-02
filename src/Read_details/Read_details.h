#ifndef READ_DETAILS_H
#define READ_DETAILS_H

#include "../inc/libraries.h" // includes the necessary structures and enums

void	display_car_details(const struct CAR *car);
void	display_driver_details(const struct DRIVER *driver);
void	display_reservation_details(const struct RESERVATION *reservation);

#endif