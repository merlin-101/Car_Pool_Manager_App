#include "New_details.h"

int	safe_scanf(const char *format, void *input) {
    int	result;

	result = scanf(format, input);
    if (result != 1) {
        printf("Invalid input. Terminating program...\n");
        exit(EXIT_FAILURE);
    }
    return result;
}

struct CAR* create_car()
{
	struct CAR* newCar = malloc(sizeof(struct CAR));
    if (newCar == NULL) {
        printf("Memory allocation failed. Exiting...\n");
		free(newCar);
        exit(EXIT_FAILURE);
    }

    printf("Enter car details:\n");
    printf("Enter ID: ");
    safe_scanf("%d", &(newCar -> id));
    printf("Enter brand: ");
    safe_scanf("%s", newCar -> brand);
    printf("Enter model: ");
    safe_scanf("%s", newCar -> model);
    printf("Enter number of seats: ");
    safe_scanf("%d", &(newCar -> seats));
    printf("Enter license plate: ");
    safe_scanf("%s", newCar -> licensePlate);
    printf("Enter engine status (0: COMBUSTION, 1: ELECTRIC, 2: HYBRID): ");
    safe_scanf("%d", &(newCar -> status)); //needs a check if the input is other than 0,1,2
    while (newCar -> status != COMBUSTION && newCar -> status != ELECTRIC && newCar -> status != HYBRID) {
        printf("Invalid engine status input. Please enter 0, 1, or 2: ");
        safe_scanf("%d", &(newCar -> status));
    }
    printf("Enter current autonomy: ");
    safe_scanf("%d", &(newCar -> currentAutonomy));

    newCar -> imageData = NULL;    // initializing the image as NULL
    newCar -> imageSize = 0;       // Size of the image will start as 0

	return (newCar);
}

/*
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
	newCar.currentAutonomy = currentAutonomy; 
	newCar.imageData = NULL;     //initializing the image as NULL
	newCar.imageSize = 0;		//Size of image will start as 0

	return (newCar);
};
*/