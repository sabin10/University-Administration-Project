// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Person.hpp"
#include "Room.hpp"
#include "Activity.hpp"
#include "Role.hpp"
#include "StudentRole.hpp"
#include "TeacherRole.hpp"
#include "GuestRole.hpp"
#include "AdministrativeRole.hpp"
#include "PersonRepository.hpp"
#include "RoomRepository.hpp"
#include "ActivityRepository.hpp"
#include "Repository.hpp"

int main()
{
	
	PersonRepository persons;
	persons.add(new Person("Hantu", "Sabin", "sabinhantu@gmail.com", "1234"));

	Person *sabin;
	sabin = persons.findByName("Sabin", "Hantu");
	sabin->addRole(new StudentRole());
	//sabin->printRoles();
	//persons.removeByName("Sabin", "Hantu");  

	Person *p2 = new Person("Michael", "Ion", "qqq@gmail.com", "1234");
	persons.add(p2);

	//adaugam roluri unei persoane
	p2->addRole(new TeacherRole());
	p2->addRole(new StudentRole());
	
	//print rolurile unei persoane
	p2->printRoles();
	RoomRepository rooms;
	Room *titeica = new Room("Titeica", 200, 2, 100);
	rooms.add(titeica);

	ActivityRepository activities;
	activities.add(new Activity(titeica, sabin, "Curs de POO"));
	activities.add(new Activity(new Room("Laborator", 212, 2, 30), new Person("Dragan", "Mihaita", "smecher@echipament", "12345"), "Laborator Retele"));
	Activity *activitySearch;
	activitySearch = activities.findByRoomName("Titeica");
	activities.printAll();
	activities.removeByLocationNumber(200);
	activities.printAll();
	
	//class using template
	Repository <Person> repoPersons;
	Person *sabin2 = new Person("Hantu", "Sabin", "sabinhantu@gmail.com", "1234");
	repoPersons.add(sabin2);
	sabin2->addRole(new TeacherRole());
	repoPersons.printPersonsWithRole("Student");


}
