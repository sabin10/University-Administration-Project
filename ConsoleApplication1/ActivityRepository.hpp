#pragma once
#include "Activity.hpp"
#include <string>
#include <vector>
class ActivityRepository
{
public:
	void add(Activity *activity);
	void removeByLocationNumber(int number);
	Activity *findByRoomNumber(int num);
	Activity *findByRoomName(std::string name);
	void printAll();

private:
	std::vector<Activity*> mActivities;
};

