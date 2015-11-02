#include "Profile.h"
#include <iostream>

Profile::Profile(std::string n){
	owner = n;
	
	
	
	grade = 0;
	aoi = 0; //area of interest
	time = 0;
	
	for (int i = 0; i<3; i++){
		gpa[i] = 0;
		creat[i] = 0;
		program[i] = 0;
		design[i] = 0;
		organiz[i] = 0;
		testing[i] = 0;
		comm[i] = 0;
		lead[i] = 0;
		adapt[i] = 0;
		assert[i] = 0;
		persev[i] = 0;
		obedience[i] = 0; //or cooperative
		punctual[i] = 0;
		reliable[i] = 0;
		team[i] = 0;
		independent[i] = 0;
                //std::cout << independent[i] << std::endl;
	}
}

void Profile::printProfile(){
  //gpa[0] = yours, gpa[2-3] range you are looking for
  std::cout << "your gpa is: " << gpa[0] << " and the range you would like is: " 
			<< gpa[1] << "-" << gpa[2] << std::endl;
  //gpa[3];
  
  std::cout << "the grade you would like is: "<< grade << std::endl;
  //grade;
  std::cout << "your available time is: "<< time << std::endl;
  //time;
  
  std::cout << "your Creativity is: " << creat[0] << " and the range you would like is: " 
			<< creat[1] << "-" << creat[2] << std::endl;
  //creat[3];
  std::cout << "your Programming is: " << program[0] << " and the range you would like is: " 
			<< program[1] << "-" << program[2] << std::endl;
  //program[3];
  std::cout << "your Design is: " << design[0] << " and the range you would like is: " 
			<< design[1] << "-" << design[2] << std::endl;
  //design[3];
  std::cout << "your Organisation is: " << organiz[0] << " and the range you would like is: " 
			<< organiz[1] << "-" << organiz[2] << std::endl;
  //organiz[3];
  std::cout << "your Testing is: " << testing[0] << " and the range you would like is: " 
			<< testing[1] << "-" << testing[2] << std::endl;
  //testing[3];
  std::cout << "your Communication is: " << comm[0] << " and the range you would like is: " 
			<< comm[1] << "-" << comm[2] << std::endl;
  //comm[3];
  std::cout << "your Leadership is: " << lead[0] << " and the range you would like is: " 
			<< lead[1] << "-" << lead[2] << std::endl;
  //lead[3];
  std::cout << "your Adaptability is: " << adapt[0] << " and the range you would like is: " 
			<< adapt[1] << "-" << adapt[2] << std::endl;
  //adapt[3];
  std::cout << "your Assertiveness is: " << assert[0] << " and the range you would like is: " 
			<< assert[1] << "-" << assert[2] << std::endl;
  //assert[3];
  std::cout << "your Perseverance is: " << persev[0] << " and the range you would like is: " 
			<< persev[1] << "-" << persev[2] << std::endl;
  //persev[3];
  std::cout << "your Obedience is: " << obedience[0] << " and the range you would like is: " 
			<< obedience[1] << "-" << obedience[2] << std::endl;
  //obedience[3]; //or cooperative
  std::cout << "your Punctuality is: " << punctual[0] << " and the range you would like is: " 
			<< punctual[1] << "-" << punctual[2] << std::endl;
  //punctual[3];
  std::cout << "your Reliability is: " << reliable[0] << " and the range you would like is: " 
			<< reliable[1] << "-" << reliable[2] << std::endl;
  //reliable[3];
std::cout << "your Area of Interest is: "<< aoi << std::endl;
  //aoi; //area of interest
std::cout << "your Teamwork is: " << team[0] << " and the range you would like is: " 
			<< team[1] << "-" << team[2] << std::endl;
  //team[3];
  std::cout << "your Independance is: " << independent[0] << " and the range you would like is: " 
			<< independent[1] << "-" << independent[2] << std::endl;
  //independent[3];
}
