#include "Read_details.h"

void	display_driver_details(const struct DRIVER *driver)
{
	printf("Name: %s\n", driver -> name);
	printf("Contact number: %s\n", driver -> contact);
	printf("License Number: %s\n", driver -> licenseNumber);
}
