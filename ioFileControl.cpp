#include "ioFileControl.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

std::vector<Student*> ioFileControl::stuInput(std::vector<Student*> students){
	
	std::string textc;
	int textn;
	std::ifstream stufilein;
	stufilein.open("StudentList.txt");
	std::cout << "read in the file" << std::endl;
	
	//std::getline(stufilein, textc);// >> textc;
		//char* text = textc;
	Student* stu = new Student ("name");
	char * cstr;
	std::string N;
	int g, r, A;
	while (std::getline(stufilein, textc)){
		cstr = new char [textc.substr(1).length()+1];
		std::strcpy(cstr,textc.c_str());
		switch(textc[0]){
			case 'N': 
				
				N = (textc.substr(1));
				//s = new Student (textc.substr(1));
				std::cout << "new student created Name: " << N << std::endl;
				break;
			case 'g': 
				//s->getProfile()->grade = (int)(cstr[0]);
				g = (int)(cstr[0]);
				std::cout << "Grade: " << g << std::endl;
				break;
			case 'r': 
				r = (int)(cstr[0]);
				std::cout << "Area of Interest: " << r << std::endl;
				//s->getProfile()->aoi = (int)(cstr[0]);
				break;
			case 'A': 
				A = (int)(cstr[0]);
				std::cout << "Available Time: " << A << std::endl;
				//s->getProfile()->time = (int)(cstr[0]);
				break;
			case 'Z':
				stu = new Student (N);
				stu->getProfile()->grade = g;
				stu->getProfile()->aoi = r;
				stu->getProfile()->time = A;
				students.push_back(stu);
				break;
		}
	}
	
	return students;
}
void ioFileControl::stuOutput(std::vector<Student*> students){
	std::ofstream stufileout("StudentList.txt", std::ios::out);
  
	for(int i =0; i<students.size();i++){
		
		stufileout << "N" << students[i]->name << std::endl;
		stufileout << "g" << students[i]->getProfile()->grade << std::endl;
		stufileout << "r" << students[i]->getProfile()->aoi << std::endl;//area of interest
		stufileout << "A" << students[i]->getProfile()->time << std::endl;
	}
	stufileout << "Z" ;
	
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
