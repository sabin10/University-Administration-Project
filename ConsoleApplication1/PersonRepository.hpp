#pragma once
#include "Person.hpp"
#include <string>
#include <vector>

class PersonRepository
{
public:
	Person *findByName(std::string pFirstName, std::string pLastName);
	Person *findByCNP(std::string pCNP);
	void add(Person *person);
	void removeByName(std::string pFirstName, std::string pLastName);
	void removeByCNP(std::string pCNP);
	void printAll();
	void printTeachers();

private:
	std::vector<Person*> mPersons;
};

