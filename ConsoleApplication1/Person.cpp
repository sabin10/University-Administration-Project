#include "pch.h"
#include "Person.hpp"
#include <iostream>
#include "Role.hpp"

Person::Person(std::string pLastName, std::string pFirstName, std::string pEmail, std::string pCNP)
	: mLastName(pLastName),
	mFirstName(pFirstName),
	mEmail(pEmail),
	mCNP(pCNP)																						
{
}

void Person::setLastName(std::string pLastName)
{
	mLastName = pLastName;
}

std::string Person::getLastName() const
{
	return mLastName;
}

void Person::setFirstName(std::string pFirstName)
{
	mFirstName = pFirstName;
}

std::string Person::getFirstName() const
{
	return mFirstName;
}

void Person::setEmail(std::string pEmail)
{
	mEmail = pEmail;
}

std::string Person::getEmail() const
{
	return mEmail;
}

void Person::setCNP(std::string pCNP)
{
	mCNP = pCNP;
}

std::string Person::getCNP() const
{
	return mCNP;
}

void Person::addRole(Role *pRole)
{
	mRoles.push_back(pRole);
}

void Person::printRoles()
{
	if (mRoles.empty()) {
		std::cout << mFirstName << " " << mLastName << " doesn't have any role yet.\n";
		return;
	}

	std::cout << mFirstName << " " << mLastName << " have the following roles:\n";
	std::vector<Role*>::iterator it;
	for (it = mRoles.begin(); it != mRoles.end(); ++it) {
		if ((*it)->mType == 0)
			std::cout << "Student" << std::endl;
		else if ((*it)->mType == 1)
			std::cout << "Teacher" << std::endl;
		else if ((*it)->mType == 2)
			std::cout << "Administrativ" << std::endl;
		else if ((*it)->mType == 3)
			std::cout << "Guest" << std::endl;
	}
}

bool Person::hasRoleOf(std::string roleToCheck)
{
	if (mRoles.empty())
		return false;

	std::vector<Role*>::iterator it;
	for (it = mRoles.begin(); it != mRoles.end(); ++it) {
		if ((*it)->mType == 0 && roleToCheck == "Student")
			return true;
		else if ((*it)->mType == 1 && roleToCheck == "Teacher")
			return true;
		else if ((*it)->mType == 2 && roleToCheck == "Administrativ")
			return true;
		else if ((*it)->mType == 3 && roleToCheck == "Guest")
			return true;
	}

	return false;
}

