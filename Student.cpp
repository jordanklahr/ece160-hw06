#include <iostream>
#include "Student.h"
#include <iomanip>
Student::Student(std::string fn, std::string ln, int y, Major m)
  : _first_name(fn), _last_name(ln), _grad_year(y), _major(m) {}

Student::~Student() {}

float Student::getGpa() {
	unsigned int i = 0;
	float gpasum = 0;
	while(i < _grades.size())
	{
		gpasum = gpasum + _grades.at(i);
		i++;
	}
	float gpa = gpasum / _grades.size();
	return gpa;
  return 0.0;
}

void Student::addGrade(float grade) {
	_grades.push_back(grade);

}

const std::string& Student::getLastName() {
  // TODO Fill in real implementation
  return _last_name;
}

std::string Student::majorString(Major m) {
	std::string maj;
	switch(m){
		case Major::EE: 
			maj = "EE";
			return maj;
		case Major::ME: 
			maj = "ME";
			return maj; 
		case Major::CE: 
			maj = "CE";
			return maj; 
		case Major::CHE: 
			maj = "CHE";
			return maj;
		case Major::BSE: 
			maj= "BSE";
			return maj;
		case Major::ART: 
			maj = "ART";
			return maj;
		case Major::ARCH: 
			maj = "ARCH";
			return maj;
	}
	return "Error";
}
  /*
   * Should print:
   * _last_name, first_name
   * _major _grad_year
   * GPA: x.xx
   */
void Student::printInfo() {
	std::cout << _last_name <<", " << _first_name<< std::endl;
	std::cout << majorString(_major) << " "<< _grad_year<< std::endl;
	std::cout << "GPA: " << std::setprecision(2)<< std::fixed <<getGpa() << std::endl;
}
