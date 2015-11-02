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
	ProjectControl* pc = new ProjectControl();
	ioFileControl* fc = new ioFileControl();
	
	//create the list of all students and admins
	std::vector<Student*> students;
	std::vector<Admin*> admins;
	
	
	//IO testing here
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
	

	std::cout << "now we output" << std::endl;
	fc->stuOutput(students);
	fc->admOutput(admins);
	
	std::cout << std::endl << "all students: " << std::endl;
	for(int i =0; i<students.size();i++){
		std::cout << "name: " << students[i]->getName() << std::endl;  
		students[i]->getProfile()->printProfile();
	}

        //Project Testing here
        std::cout << std::endl << "\n\n\n\n\n\n\n\n\n" << std::endl;
        fc->prjInput(pc, admins, students);
        fc->prjOutput(pc);
        Project* p = pc->getProj(0);
        std::cout << p->getName() << std::endl;
	std::cout << p->getTeamSize() << std::endl;
	for (int i=0; i<p->getNumStu(); i++){
		std::cout << p->getStu(i)->getName() << std::endl;
	}
	return 0;
}
