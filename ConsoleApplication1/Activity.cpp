#include "pch.h"
#include "Activity.hpp"

Activity::Activity(Room * pLocation, Person * pOwner, std::string pDescription)
	:	mLocation(pLocation),
		mOwner(pOwner),
		mDescription(pDescription)
{
}

void Activity::setLocation(Room * pLocation)
{
	mLocation = pLocation;
}

Room * Activity::getLocation() const
{
	return mLocation;
}

void Activity::setOwner(Person * pOwner)
{
	mOwner = pOwner;
}

Person * Activity::getOwner() const
{
	return mOwner;
}

void Activity::setDescription(std::string pDescription)
{
	mDescription = pDescription;
}

std::string Activity::getDescription() const
{
	return mDescription;
}
