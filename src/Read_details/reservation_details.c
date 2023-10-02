#include "Read_details.h"

void	display_reservation_details(const struct RESERVATION *reservation)
{
	printf("Card ID: %d\n", reservation -> carID);
	printf("Driver ID: %d\n", reservation -> driverID);
	printf("Pickup Date: %d-%d-%d %d:%d\n", reservation -> pickupDate.year, reservation -> pickupDate.month, \
		reservation -> pickupDate.day, reservation -> pickupDate.hour, reservation -> pickupDate.minute);
	printf("Dropoff Date: %d-%d-%d %d:%d\n", reservation->dropoffdate.year, reservation->dropoffdate.month,	 \
	 reservation->dropoffdate.day, reservation->dropoffdate.hour, reservation->dropoffdate.minute);
}
