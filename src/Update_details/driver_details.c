#include "Update_details.h"

void	update_driver_details(struct DRIVER *driver, const char *NewName, const char *NewContact, const char *NewLicenseNumber)
{
	strcpy(driver ->name, NewName);
	strcpy(driver ->contact, NewContact);
	strcpy(driver -> licenseNumber, NewLicenseNumber);
}
