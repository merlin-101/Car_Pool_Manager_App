#include "new_details.h"

struct CAR create_car(int id, const char *brand, const char *model, int seats, \
	const char *licensePlate, enum engineType status, int currentAutonomy)
{
	struct CAR newCar;	
	newCar.id = id;
	strcpy(newCar.brand, brand);
    strcpy(newCar.model, model);
	newCar.seats = seats;
	strcpy(newCar.licensePlate, licensePlate);
	newCar.status = status;
	newCar.currentAutonomy = currentAutonomy; //assuming it's a full tank/battery
	newCar.imageData = NULL;     //initializing the image as NULL
	newCar.imageSize = 0;		//Size of image will start as 0

	return (newCar);
};
