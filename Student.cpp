#include "Student.h"
#include "Profile.h"

Student::Student(std::string n) : User(n){
	
	std::string name = n;
	profile = new Profile(name);
}

std::string Student::getName(){
	return name;
}

Profile* Student:: getProfile(){
	return profile;
}
