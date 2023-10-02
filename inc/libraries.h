#ifndef LIBRARIES_H
#define LIBRARIES_H

#include <time.h>
#include <stdio.h>
#include <io.h>
#include <string.h>
#include <stdlib.h>

//available types of car engine
enum engineType {
	COMBUSTION,
	ELECTRIC,
	HYBRID
};


//structure to store date and time
struct DateTime {
	int year;
	int month;
	int day;
	int hour;
	int minute;
};


//defining a structure for CAR details
struct CAR {

	int				id;
	char			brand[50];
	char			model[50];
	int				seats;
	char			licensePlate[50];
	enum			engineType status;
	int				currentAutonomy;
	char			*imageData; 		 // Pointer to store BLOB image data
	long			imageSize; 			//Size of the BLOB image data
};


//defining a structure for Driver details
struct DRIVER {
	char			name[50];
	char			contact[50];
	char			licenseNumber[50];
};


//creating a structure and bridge for reservation details and linking them with ID's as keys
struct RESERVATION {
	int				carID;
	int				driverID;
	struct DateTime pickupDate;
	struct DateTime dropoffdate;
};


#endif