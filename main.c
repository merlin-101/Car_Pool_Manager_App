#include "./inc/libraries.h"

struct CAR* create_car();
void	display_car_details(const struct CAR *car);

int	safe_scanf_main(const char *format, void *input) {
    int	result;

	result = scanf(format, input);
    if (result != 1) {
        printf("Invalid input. Terminating program...\n");
        exit(EXIT_FAILURE);
    }
    return result;
}

//inicialmente tambem queria por um makefile, mas timeconstraints

int	main(void)
{
	int				choice;
	int				i;
	int				MAX_CARS = 100;
	struct CAR**	newCar = malloc(MAX_CARS * sizeof(struct CAR*));

	i = 0;
	if (newCar == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        exit(EXIT_FAILURE);
    }
	while(1)
	{
	    printf("Car Reservation System Dashboard\n");
        printf("1. Add new car\n");
        //printf("2. View Reservations\n");
        //printf("3. Delete Reservation\n");
        printf("4. Exit\n");

		printf("Enter your choice: ");
		safe_scanf_main("%d", &choice);
		switch (choice) {
            case 1:
				newCar[i] = malloc(sizeof(struct CAR));
            	if (newCar[i] == NULL) {
                	printf("Memory allocation failed. Exiting...\n");
                	exit(EXIT_FAILURE);
            	}
            	*newCar[i] = *create_car();
                break;
            case 2:
                // Implement view reservations functionality
                break;
            case 3:
                // Implement delete reservation functionality
                break;
            case 4:
                // Exit the program
                printf("Exiting the program. Goodbye!\n");
				int j = 0;
				while (j < i)
				{
					free(newCar[i]);
				}
                return 0;
            default:
                // Invalid choice
                printf("Invalid choice. Please try again.\n");
        }
	}
	return (0);
}
