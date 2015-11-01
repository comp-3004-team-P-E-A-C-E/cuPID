#include "ioFileControl.h"
#include <iostream>
#include <fstream>
#include <string>

std::vector<Student*> ioFileControl::stuInput(std::vector<Student*> students){
	
	std::string textc;
	int textn;
	std::ifstream stufilein;
	stufilein.open("StudentList.txt");
	std::cout << "read in the file" << std::endl;
	
	//std::getline(stufilein, textc);// >> textc;
		//char* text = textc;
	Student* s = new Student ("name");
	char * cstr;
	while (std::getline(stufilein, textc)){
		cstr = new char [textc.substr(1).length()+1];
		switch(textc[0]){
			case 'N': 
				std::cout << "new student created Name: " << textc.substr(1) << std::endl;
				s = new Student (textc.substr(1));
				break;
			case 'g': 
				std::cout << "Grade: " << cstr[0] << std::endl;
				s->getProfile()->grade = (int)(cstr[0]);
				break;
			case 'r': 
				std::cout << "Area of Interest: " << cstr << std::endl;
				s->getProfile()->aoi = (int)(cstr[0]);
				break;
			case 'A': 
				std::cout << "Available Time: " << cstr << std::endl;
				s->getProfile()->time = (int)(cstr[0]);
				break;
			case 'Z':
				students.push_back(s);
				break;
		}
		
		
		
		
		
		/*std::getline(stufilein, textc);
		//if(textc == "END" || stufilein.fail()){
		//	break;
		//}else{
			std::cout << "in the while loop" << std::endl;
			
			Student* s = new Student(textc);
		
			stufilein >> textn;
			s->getProfile()->grade = textn;
			stufilein >> textn;
			s->getProfile()->aoi = textn;
			stufilein >> textn;
			s->getProfile()->time = textn;
			students.push_back(s);
			//std::getline(stufilein, textc);
		//}*/
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
