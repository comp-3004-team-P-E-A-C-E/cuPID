#include "ioFileControl.h"
#include <iostream>
#include <fstream>
#include <string>

std::vector<Student*> ioFileControl::stuInput(std::vector<Student*> students){
	
	std::string textc;
	int textn;
  
	std::ifstream stufilein("StudentList.txt", std::ios::in);
	std::cout << "read in the file" << std::endl;
	
	while (!stufilein.eof()){
		std::cout << "in the while loop" << std::endl;
		std::getline(stufilein, textc);// >> textc;
		//char* text = textc;
		Student* s = new Student(textc);
		
		stufilein >> textn;
		s->getProfile()->grade = textn;
		stufilein >> textn;
		s->getProfile()->aoi = textn;
		stufilein >> textn;
		s->getProfile()->time = textn;
		students.push_back(s);
	}
	
	return students;
}
void ioFileControl::stuOutput(std::vector<Student*> students){
	std::ofstream stufileout("StudentList.txt", std::ios::out);
  
	for(int i =0; i<students.size();i++){
		stufileout << students[i]->name;
		stufileout << std::endl;
		stufileout << students[i]->getProfile()->grade;
		stufileout << std::endl;
		stufileout << students[i]->getProfile()->aoi; //area of interest
		stufileout << std::endl;
		stufileout << students[i]->getProfile()->time;
		stufileout << std::endl;
	}
	
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
