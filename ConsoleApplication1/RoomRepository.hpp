#pragma once
#include "Room.hpp"
#include <vector>

class RoomRepository
{
public:
	void add(Room *room);
	Room *findByName(std::string pName);
	Room *findByNumber(int pNumber);

private:
	std::vector<Room*> mRooms;
};

