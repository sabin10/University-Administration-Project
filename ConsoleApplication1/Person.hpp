#pragma once
#include <string>
#include <vector>
#include "Role.hpp"
class Person
{
public:
	Person(std::string pLastName, std::string pFirstName, std::string pEmail, std::string pCNP);

	void setLastName(std::string pLastName);
	std::string getLastName() const;

	void setFirstName(std::string pFirstName);
	std::string getFirstName() const;

	void setEmail(std::string pEmail);
	std::string getEmail() const;

	void setCNP(std::string pCNP);
	std::string getCNP() const;

	void addRole(Role *pRole);

	void printRoles();

	bool hasRoleOf(std::string roleToCheck);

private:
	std::vector<Role*> mRoles;
	std::string mLastName;
	std::string mFirstName;
	std::string mEmail;
	std::string mCNP;

};

