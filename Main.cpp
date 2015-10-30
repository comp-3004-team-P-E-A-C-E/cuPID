#include "User.h"
#include "Admin.h"
#include "Student.h"
#include "Project.h"
#include "ioFileControl.h"
#include "ProjectControl.h"
#include <iostream>
#include <string>

int main(int argc, char** argv) {
	
  ProjectControl pc = ProjectControl();
  std::string n = "name";
  Admin* a = new Admin("Christine");
  Admin* b = new Admin("Bob");
  Student* s = new Student("Joey");
  
  std::vector<Student*> students;
  
  pc.createProj(a, n);
  Project* p = pc.getProj(0);
  pc.addStu(s, p);
  pc.addStu(s, p);
  std::cout << p->getName() << std::endl;
  //pc.removeStu(s, p);
  std::cout << s->getName() << std::endl;

  std::vector<Project*> j = pc.getJoined(s);
  std::vector<Project*> o = pc.getOwned(b);
  std::cout << o.size() << std::endl;
  
  ioFileControl* fc = new ioFileControl();
  
  students.push_back(s);
  
  std::cout << p->getName() << ": has " << p->containsStu(s) << " Student(s)"<< std::endl;
  
  //testing output stuff
  /*std::cout << std::endl << "all students: " << std::endl;
  for(int i =0; i<students.size();i++){
	std::cout << "name: " << students[i]->getName() << std::endl;  
	students[i]->getProfile()->printProfile();
  }*/
  
	students = fc->stuInput(students);
	std::cout << "now we output" << std::endl;
	fc->stuOutput(students);
	
	// some admin IO file stuff that i need to stick in the iofilecontrol
	/*std::fstream adminfile("AdminList.txt", std::ios::in | std::ios::out | std::ios::app);
	//Student data;

	//file >> data;
	adminfile << u->name << std::endl;
	
	adminfile.close();*/
  
  
  std::cout << std::endl << "all students again: " << std::endl;
  for(int i =0; i<students.size();i++){
	std::cout << "name: " << students[i]->getName() << std::endl;  
	students[i]->getProfile()->printProfile();
  }
  
  return 0;
}
