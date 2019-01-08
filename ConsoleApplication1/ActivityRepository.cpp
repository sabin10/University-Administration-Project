#include "pch.h"
#include "ActivityRepository.hpp"
#include <iostream>

void ActivityRepository::add(Activity * activity)
{
	mActivities.push_back(activity);
}

void ActivityRepository::removeByLocationNumber(int number)
{
	if (mActivities.empty())
		return;

	std::vector<Activity*>::iterator it;
	for (it = mActivities.begin(); it != mActivities.end(); it++) {
		if ((*it)->getLocation()->getNumber() == number) {
			mActivities.erase(it);
			return;
		}
	}

}

Activity * ActivityRepository::findByRoomNumber(int num)
{
	std::vector<Activity*>::iterator it;
	for (it = mActivities.begin(); it != mActivities.end(); it++)
		if ((*it)->getLocation()->getNumber() == num) {
			std::cout << "Am gasit roomul: " << num << std::endl;
			return *it;
		}
	return NULL;
}

Activity * ActivityRepository::findByRoomName(std::string name)
{
	std::vector<Activity*>::iterator it;
	for (it = mActivities.begin(); it != mActivities.end(); it++)
		if ((*it)->getLocation()->getName() == name) {
			std::cout << "Am gasit roomul: " << name << std::endl;
			return *it;
		}
	return NULL;
}

void ActivityRepository::printAll()
{
	if (mActivities.empty()) {
		std::cout << "There are no activities.\n";
		return;
	}
	 
	int i = 1;
	std::vector<Activity*>::iterator it;
	for (it = mActivities.begin(); it != mActivities.end(); it++) {	
		std::cout << i << ". " << (*it)->getLocation()->getName() << " with number " << (*it)->getLocation()->getNumber() << " and owned by " << (*it)->getOwner()->getLastName() << std::endl;
		i++;
	}
}
