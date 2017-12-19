#include "StudentDatabase.h"
#include <iostream>

// Insert a student into _students map
void StudentDatabase::addStudent(Student *s) {
	_students.insert(std::pair<std::string,Student*>(s->getLastName(),s));
}

// Find the student with the matching last_name
// and call printInfo on that student, or
// print "<last_name> not found" if the student is not found.
void StudentDatabase::printStudent(std::string last_name) {
	auto  test = _students.find(last_name) ;
	if (test != _students.end())
		_students.at(last_name)->printInfo();
	else
		std::cout << last_name << " not found" << std::endl;
}
