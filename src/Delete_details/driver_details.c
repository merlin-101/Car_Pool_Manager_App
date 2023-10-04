/*#include "Delete_details.h"

void	delete_driver(struct DRIVER *drivers, int *numDrivers, const char *licenseNumber_to_delete)
{
	int	i;
	int	j;

	i = 0;
	while (i < *numDrivers)
	{
		if (strcmp(drivers[i].licenseNumber, licenseNumber_to_delete) == 0)
		{
			j = i;
			while (j < *numDrivers - 1)
			{
				drivers[j] = drivers[j + 1];
				++j;
			}
			(*numDrivers)--;
			printf("The Driver with the license ID %s was deleted successfuly.\n", licenseNumber_to_delete);
			return;
		}
		i++;
	}
	printf("The Driver with the license ID %s was not found.\n", licenseNumber_to_delete);
}
*/