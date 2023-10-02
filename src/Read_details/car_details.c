#include "Read_details.h"

void	display_car_details(const struct CAR *car)
{
	printf("Car ID: %d\n", car -> id);
    printf("Brand: %s\n", car -> brand);
    printf("Model: %s\n", car -> model);
	printf("Seats: %d\n", car -> seats);
	printf("License Plate: %s\n", car -> licensePlate);
	printf("Status: %s\n", car -> status);
	printf("Current Autonomy: %%d\n", car -> currentAutonomy);
	//BLOP images missing !
}
