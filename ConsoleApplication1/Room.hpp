#pragma once
#include <string>

class Room
{
public:
	Room(std::string pName = "", int pNumber = 0, int pFloor = 0, int pCapacity = 0);

	void setName(std::string pName);
	std::string getName() const;

	void setNumber(int pNumber);
	int getNumber() const;

	void setFloor(int pFloor);
	int getFloor() const;

	void setCapacity(int pCapacity);
	int getCapacity() const;

private:
	std::string mName;
	int mNumber;
	int mFloor;
	int mCapacity;
};

