#include "Update_details.h"

void	update_reservation_details(struct RESERVATION *reservation, int carID, int driverID, \
	struct DateTime NewpickupDate, struct DateTime NewdropoffDate)
{
	reservation -> pickupDate = NewpickupDate;
    reservation -> dropoffdate = NewdropoffDate;
}
