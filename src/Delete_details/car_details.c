/*#include "Delete_details.h"

void	delete_car(struct CAR *cars, int *numCars, int carID_to_delete)
{
	int	i;
	int	j;

	i = 0;
	while (i < *numCars)
	{
		if (cars[i].id == carID_to_delete)
		{
			j = i;
			while (j < *numCars - 1)
			{
				cars[j] = cars[j + 1];
				++j;
			}
			(*numCars)--;
			printf("The Car ID %d was deleted successfuly.\n", carID_to_delete);
			return;
		}
		i++;
	}
	printf("Car ID %d was not found.\n", carID_to_delete);
}
*/