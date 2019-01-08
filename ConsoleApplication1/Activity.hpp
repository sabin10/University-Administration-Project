#pragma once
#include "Person.hpp"
#include "Role.hpp"
#include "Room.hpp"
#include <string>

class Activity
{
public:
	Activity(Room *pLocation, Person *pOwner, std::string pDescription = "");
	
	void setLocation(Room *pLocation);
	Room *getLocation() const;

	void setOwner(Person *pOwner);
	Person *getOwner() const;

	void setDescription(std::string pDescription);
	std::string getDescription() const;

private:
	Room *mLocation;
	Person *mOwner;
	std::string mDescription;
};

