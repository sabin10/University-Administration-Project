#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <typeinfo>

template<class TIP>
class Repository
{
public:
	void add(TIP *toAdd);
	void printPersonsWithRole(std::string role); // doar daca TIP = class Person
	void removeLastElement();
	/*
	nu are logica sa creez o metoda de genul removeByName, pt ca ar trebui sa o creez
	pt fiecare TIP in parte, ceea ce nu-si mai are rost daca tot folosim template
	*/
	
private:
	std::vector<TIP*> mList;
};

template<class TIP>
inline void Repository<TIP>::add(TIP * toAdd)
{
	mList.push_back(toAdd);
}

template<class TIP>
inline void Repository<TIP>::printPersonsWithRole(std::string role)
{
	if (mList.empty()) {
		std::cout << "There are no " << role << "s" << std::endl;
		return;
	}

	int counter = 0;
	for (unsigned int i = 0; i < mList.size(); i++) {
		if (mList[i]->hasRoleOf(role)) {
			counter++;
			std::cout << mList[i]->getFirstName() << " " << mList[i]->getLastName() << std::endl;

		}
	}

	if (counter == 0)
		std::cout << "There are no " << role << "s" << std::endl;
}

template<class TIP>
inline void Repository<TIP>::removeLastElement()
{
	mList.pop_back();
}
