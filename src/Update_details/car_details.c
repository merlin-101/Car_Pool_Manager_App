#include "Update_details.h"

void	update_car_details(struct CAR *car, const char *brand, const char *model, int seats, \
	const char *licensePlate, enum engineType status, int currentAutonomy)
{
	strcpy(car ->brand, brand);
	strcpy(car ->model, model);
	car -> seats = seats;
	strcpy(car -> licensePlate, licensePlate);
	car -> status = status;
	car -> currentAutonomy = currentAutonomy;
}
