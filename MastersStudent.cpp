#include "MastersStudent.h"
#include <iostream>
#include <iomanip>
// Constructor Implementations
MastersStudent::MastersStudent(Student ug, int msy):
    Student(ug), _ms_grad_year(msy) {}
  
MastersStudent::MastersStudent(std::string fn, std::string ln,
    int ugy, int msy, Major m):
    Student(fn, ln, ugy, m), _ms_grad_year(msy) {}

// New methods specific to MastersStudent
float MastersStudent::getMsGpa() {
	unsigned int i = 0;
	float msgpasum = 0;
	while(i < _ms_grades.size())
	{
		msgpasum = msgpasum + _ms_grades.at(i);
		i++;
	}
	float msgpa = msgpasum / _ms_grades.size();
	return msgpa;
}

void MastersStudent::addMsGrade(float grade) {
	_ms_grades.push_back(grade);
}

// Override Student's printInfo to include new fields
void MastersStudent::printInfo() {
	Student::printInfo();
	std::cout << "MS " << majorString(_major) << ": "<< _ms_grad_year << std::endl;
	std::cout << "MS GPA: " << std::setprecision(2)<< std::fixed << getMsGpa() << std::endl;
	}
