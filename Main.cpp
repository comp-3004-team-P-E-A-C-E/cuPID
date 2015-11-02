#include "User.h"
#include "Admin.h"
#include "Student.h"
#include "Project.h"
#include "ioFileControl.h"
#include "ProjectControl.h"
#include <iostream>
#include <string>

int main(int argc, char** argv) {
	
	//create the control objects
	ProjectControl pc = ProjectControl();
	ioFileControl* fc = new ioFileControl();
	
	//create the list of all students and admins
	std::vector<Student*> students;
	std::vector<Admin*> admins;
	
	
	//read in all the already created students and add them to the list
	students = fc->stuInput(students);
	admins = fc->admInput(admins);
	std::cout <<"Everything has been read in." << std::endl;
	
	std::cout << "the Students: " << std::endl; 
	for(int i =0; i<students.size();i++){
		std::cout << "name: " << students[i]->getName() << std::endl; 
	}
	
	std::cout << "the Admins: " << std::endl; 
	for(int i =0; i<admins.size();i++){
		std::cout << "name: " << admins[i]->getName() << std::endl; 
	}
	
	pc.createProj(admins[0], "project1");
	std::cout <<"create a project" << std::endl;
	Project* p = pc.getProj(0);
	pc.addStu(students[0], p);
	std::cout <<"add a student" << std::endl;
	pc.addStu(students[1], p);
	std::cout <<"add another student" << std::endl;
	pc.addStu(students[2], p);
	std::cout <<"add a third student" << std::endl;
	std::cout << p->getName() << std::endl;
	
	for (int i=0; i<p->getNumStu(); i++){
		std::cout << p->getStu(i)->getName() << std::endl;
	}
	
	pc.removeStu(students[2], p);
	std::cout << students[2]->getName() << " Has been removed" << std::endl;
	for (int i=0; i<p->getNumStu(); i++){
		std::cout << p->getStu(i)->getName() << std::endl;
	}

	std::vector<Project*> j1 = pc.getJoined(students[0]);
	//std::cout << students[0] << " is in these projects: " << j1 << std::endl;
	std::vector<Project*> j2 = pc.getJoined(students[1]);
	//std::cout << students[1] << " is in these projects: " << j2 << std::endl;
	std::vector<Project*> o1 = pc.getOwned(admins[0]);
	//std::cout << admins[0] << " owns these projects: " << o1 << std::endl;
	std::vector<Project*> o2 = pc.getOwned(admins[1]);
	//std::cout << admins[1] << " owns these projects: " << o1 << std::endl;
	
	std::cout << p->getName() << ": has " << p->getNumStu() << " Student(s)"<< std::endl;
	
	std::cout << "now we output" << std::endl;
	fc->stuOutput(students);
	fc->admOutput(admins);
	
	std::cout << std::endl << "all students: " << std::endl;
	for(int i =0; i<students.size();i++){
		std::cout << "name: " << students[i]->getName() << std::endl;  
		students[i]->getProfile()->printProfile();
	}
  
	return 0;
}
