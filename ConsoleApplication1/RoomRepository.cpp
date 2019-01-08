#include "pch.h"
#include "RoomRepository.hpp"

void RoomRepository::add(Room *room)
{
	mRooms.push_back(room);
}

Room *RoomRepository::findByName(std::string pName)
{
	std::vector<Room*>::iterator it;
	for (it = mRooms.begin(); it != mRooms.end(); ++it)
		if ((*it)->getName() == pName)
			return *it;
	return NULL;
}

Room *RoomRepository::findByNumber(int pNumber)
{
	std::vector<Room*>::iterator it;
	for (it = mRooms.begin(); it != mRooms.end(); ++it)
		if ((*it)->getNumber() == pNumber)
			return *it;
	return NULL;
}
