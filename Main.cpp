#include "User.h"
#include "Admin.h"
#include "Student.h"
#include "Project.h"
#include "ioFileControl.h"
#include "ProjectControl.h"
#include "Repository.h"
#include <iostream>
#include <string>

int main(int argc, char** argv) {
	
	//create the control objects
	ProjectControl* pc = new ProjectControl();
	
	//create the list of all students and admins
	std::vector<Student*>* students = pc->rep->getStudents();
	std::vector<Admin*>* admins = pc->rep->getAdmins();
	
	
	//IO testing here
	std::cout <<"Everything has been read in." << std::endl;
	
	std::cout << "the Students: " << std::endl; 
	for(int i =0; i<students->size();i++){
		std::cout << "name: " << (*students)[i]->getName() << std::endl; 
	}
	
	std::cout << "the Admins: " << std::endl; 
	for(int i =0; i<admins->size();i++){
		std::cout << "name: " << (*admins)[i]->getName() << std::endl; 
	}
	
	std::cout << std::endl << "all students: " << std::endl;
	for(int i =0; i<students->size();i++){
		std::cout << "name: " << (*students)[i]->getName() << std::endl;  
		(*students)[i]->getProfile()->printProfile();
	}

        //Project Testing here
        std::cout << std::endl << "\n\n\n\n\n\n\n\n\n" << std::endl;
        ioFileControl* fc = new ioFileControl();
        //fc->prjInput(pc, *admins, *students);
        fc->prjOutput(pc);
        Project* p = pc->getProj(0);
        std::cout << p->getName() << std::endl;
	std::cout << p->getTeamSize() << std::endl;
	for (int i=0; i<p->getNumStu(); i++){
		std::cout << p->getStu(i)->getName() << std::endl;
	}
	return 0;
}
