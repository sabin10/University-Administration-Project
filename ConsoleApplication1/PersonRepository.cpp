#include "pch.h"
#include "PersonRepository.hpp"
#include <iostream>

Person * PersonRepository::findByName(std::string pFirstName, std::string pLastName)
{
	std::vector<Person*>::iterator it;
	for (it = mPersons.begin(); it != mPersons.end(); ++it)
		if ((*it)->getFirstName() == pFirstName && (*it)->getLastName() == pLastName) {
			//std::cout << (*it)->getFirstName() << std::endl;
			return *it;
		}
	return NULL;
}

Person * PersonRepository::findByCNP(std::string pCNP)
{
	std::vector<Person*>::iterator it;
	for (it = mPersons.begin(); it != mPersons.end(); ++it)
		if ((*it)->getCNP() == pCNP)
			return *it;
	return NULL;
}

void PersonRepository::add(Person * person)
{
	mPersons.push_back(person);
}

void PersonRepository::removeByName(std::string pFirstName, std::string pLastName)
{
	std::vector<Person*>::iterator it;
	for (it = mPersons.begin(); it != mPersons.end(); ++it)
		if ((*it)->getFirstName() == pFirstName && (*it)->getLastName() == pLastName) {
			mPersons.erase(it);
			return;
		}
}

void PersonRepository::removeByCNP(std::string pCNP)
{
	std::vector<Person*>::iterator it;
	for (it = mPersons.begin(); it != mPersons.end(); ++it)
		if ((*it)->getCNP() == pCNP) {
			mPersons.erase(it);
			return;
		}
}

void PersonRepository::printAll()
{
	if (mPersons.empty()) {
		std::cout << "There are no person.\n";
		return;
	}

	std::cout << "The list with all persons within University:\n";
	std::vector<Person*>::iterator it;
	int i = 1;
	for (it = mPersons.begin(); it != mPersons.end(); ++it) {
		std::cout << i << ". " << (*it)->getLastName() << std::endl;
		i++;
	}
}

void PersonRepository::printTeachers()
{
	if (mPersons.empty()) {
		std::cout << "There are no teachers.\n";
		return;
	}

	std::vector<Person*>::iterator it;
	for (it = mPersons.begin(); it != mPersons.end(); ++it) {
		if ((*it)->hasRoleOf("Teacher"))
			std::cout << (*it)->getFirstName() << " " << (*it)->getLastName() << std::endl;
	}
}
