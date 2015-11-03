#include "ioFileControl.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <stdlib.h>

void ioFileControl::stuInput(std::vector<Student*>* students){
	
	std::string textc;
	int textn;
	std::ifstream stufilein;
	stufilein.open("StudentList.txt");
	std::cout << "read in the file" << std::endl;
	
	Student* stu;
	char * cstr;
	std::string N;
	int g, r, A;
	while (std::getline(stufilein, textc)){
		cstr = new char [textc.substr(1).length()+1];
		std::strcpy(cstr,textc.c_str()+1);
		switch(textc[0]){
			case 'N': 
				
				N = (textc.substr(1));
				break;
			case 'g': 
				g = (atoi(cstr));
				std::cout << "Grade: " << g << std::endl;
				break;
			case 'r': 
				r = (atoi(cstr));
				std::cout << "Area of Interest: " << r << std::endl;
				break;
			case 'A': 
				A = (atoi(cstr));
				std::cout << "Available Time: " << A << std::endl;
				break;
			case 'Z':
				stu = new Student(N);
				stu->getProfile()->grade = g;
				stu->getProfile()->aoi = r;
				stu->getProfile()->time = A;
				std::cout << "new student created Name: " << N << std::endl;
				students->push_back(stu);
				std::cout << "new student created Name: " << N << std::endl;
				break;
		}
	}
}
void ioFileControl::stuOutput(std::vector<Student*> students){
	std::ofstream stufileout("StudentList.txt", std::ios::out);
	std::cout << "number of students at write: " << students.size() << std::endl;
	for(int i =0; i<students.size();i++){
		
		stufileout << "N" << students[i]->name << std::endl;
		stufileout << "g" << students[i]->getProfile()->grade << std::endl;
		stufileout << "r" << students[i]->getProfile()->aoi << std::endl;//area of interest
		stufileout << "A" << students[i]->getProfile()->time << std::endl;
		stufileout << "Z" << std::endl;
	}
	//stufileout <<
	
	//code for outputting the array variables
	
	/*for (int i=0; i<3;i++){
		stufile << s1->getProfile()->gpa[i];
	}
	stufile << std::endl;
	for (int i=0; i<3;i++){
		stufile << s1->getProfile()->creat[i];
	}
	stufile << std::endl;
	for (int i=0; i<3;i++){
		stufile << s1->getProfile()->program[i];
	}
	stufile << std::endl;
	for (int i=0; i<3;i++){
		stufile << s1->getProfile()->design[i];
	}
	stufile << std::endl;
	for (int i=0; i<3;i++){
		stufile << s1->getProfile()->organiz[i];
	}
	stufile << std::endl;
	for (int i=0; i<3;i++){
		stufile << s1->getProfile()->testing[i];
	}
	stufile << std::endl;
	for (int i=0; i<3;i++){
		stufile << s1->getProfile()->comm[i];
	}
	stufile << std::endl;
	for (int i=0; i<3;i++){
		stufile << s1->getProfile()->lead[i];
	}
	stufile << std::endl;
	for (int i=0; i<3;i++){
		stufile << s1->getProfile()->adapt[i];
	}
	stufile << std::endl;
	for (int i=0; i<3;i++){
		stufile << s1->getProfile()->assert[i];
	}
	stufile << std::endl;
	for (int i=0; i<3;i++){
		stufile << s1->getProfile()->persev[i];
	}
	stufile << std::endl;
	for (int i=0; i<3;i++){
		stufile << s1->getProfile()->obedience[i]; //or cooperative
	}
	stufile << std::endl;
	for (int i=0; i<3;i++){
		stufile << s1->getProfile()->punctual[i];
	}
	stufile << std::endl;
	for (int i=0; i<3;i++){
		stufile << s1->getProfile()->reliable[i];
	}
	stufile << std::endl;
	for (int i=0; i<3;i++){
		stufile << s1->getProfile()->team[i];
	}
	stufile << std::endl;
	for (int i=0; i<3;i++){
		stufile << s1->getProfile()->independent[i];
	}*/
	
	//stufile.close();
	
}

void ioFileControl::admInput(std::vector<Admin*>* admins){
 
  std::string textc;
  int textn;
  std::ifstream stufilein;
  stufilein.open("AdminList.txt");
  std::cout << "read in the admins" << std::endl;
 
  Admin* adm;
  char * cstr;
  std::string N;
  while (std::getline(stufilein, textc)){
    cstr = new char [textc.substr(1).length()+1];
    std::strcpy(cstr,textc.c_str()+1);
    switch(textc[0]){
     case 'N': 
       N = (textc.substr(1));
       adm = new Admin (N);
       admins->push_back(adm);
       break;
     }
  }
}

void ioFileControl::admOutput(std::vector<Admin*> admins){
  std::ofstream stufileout("AdminList.txt", std::ios::out);
  std::cout << "number of admins at write: " << admins.size() << std::endl;
  for(int i =0; i<admins.size();i++){
    stufileout << "N" << admins[i]->name << std::endl;
  } 
 }




void ioFileControl::prjInput(ProjectControl* pc, std::vector<Admin*> admins, std::vector<Student*> students){
	
	std::string textc;
	int textn;
	std::ifstream stufilein;
	stufilein.open("ProjectList.txt");
	std::cout << "read in the file" << std::endl;

       std::vector<Admin*>::iterator it;
       std::vector<Student*>::iterator it2;
	
	Project* prj;
	char * cstr;
	std::string N, N2;
	int ts;
	while (std::getline(stufilein, textc)){
		cstr = new char [textc.substr(1).length()+1];
		std::strcpy(cstr,textc.c_str()+1);
		switch(textc[0]){
			case 'N': //name
				N = (textc.substr(1));
				break;
			case 't': //teamsize
				ts = (atoi(cstr));
				break;
			case 'A': //Admin Name
                                N2 = (textc.substr(1)); 
				for(it = admins.begin(); it != admins.end(); it++)
                                  if((*it)->getName() == N2) {
                                    prj = new Project(N, *it);
                                    pc->addProj(prj);
                                    prj->setTeamSize(ts);
                                    std::cout << "new Project created Name: " << N << "\nts: " << ts <<  "\nAdmin: " << N2 << std::endl;
                                  }
				break;
			case 'S': //Student Name 
				N2 = (textc.substr(1));
                                for(it2 = students.begin(); it2 != students.end(); it2++)
                                  if((*it2)->getName() == N2)
                                    pc->addStu(*it2, prj);
				std::cout << "New Student: " << N2 << std::endl;
				break;
		}
	}
}

void ioFileControl::prjOutput(ProjectControl* pc){
  std::ofstream stufileout("ProjectList.txt", std::ios::out);
  int i = 0;
  Project* curr = pc->getProj(i);
  while (curr != NULL) {
    stufileout << "N" << curr->getName() << std::endl;
    stufileout << "t" << curr->getTeamSize() << std::endl;
    stufileout << "A" << curr->getAdm()->getName() << std::endl;
    for(int j = 0; j < curr->getNumStu(); j++) {
      stufileout << "S" << curr->getStu(j)->getName() << std::endl;
    }
    i++;
    curr = pc->getProj(i);
  } 
}
