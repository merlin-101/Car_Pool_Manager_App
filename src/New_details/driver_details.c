#include "new_details.h"

struct DRIVER create_driver(const char *name, const char *contact, const char *licenseNumber) {
	struct DRIVER newDriver;
	strcpy(newDriver.name, name);
	strcpy(newDriver.contact, contact);
	strcpy(newDriver.licenseNumber, licenseNumber);

	return (newDriver);
};
