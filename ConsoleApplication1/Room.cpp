#include "pch.h"
#include "Room.hpp"


Room::Room(std::string pName, int pNumber, int pFloor, int pCapacity)
	:	mName(pName),
		mNumber(pNumber),
		mFloor(pFloor),
		mCapacity(pCapacity)
{
}

void Room::setName(std::string pName)
{
	mName = pName;
}

std::string Room::getName() const
{
	return mName;
}

void Room::setNumber(int pNumber)
{
	mNumber = pNumber;
}

int Room::getNumber() const
{
	return mNumber;
}

void Room::setFloor(int pFloor)
{
	mFloor = pFloor;
}

int Room::getFloor() const
{
	return mFloor;
}

void Room::setCapacity(int pCapacity)
{
	mCapacity = pCapacity;
}

int Room::getCapacity() const
{
	return mCapacity;
}
