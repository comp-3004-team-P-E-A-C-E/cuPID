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
	}
}

void Profile::printProfile(){
	
  //gpa[0] = yours, gpa[2-3] range you are looking for
  std::cout << "your gpa is: " << gpa[1] << " and the range you would like is: " 
			<< gpa[2] << "-" << gpa[3] << std::endl;
  //gpa[3];
  
  std::cout << "the grade you would like is: "<< grade << std::endl;
  //grade;
  std::cout << "your available time is: "<< time << std::endl;
  //time;
  
  std::cout << "your Creativity is: " << creat[1] << " and the range you would like is: " 
			<< creat[2] << "-" << creat[3] << std::endl;
  //creat[3];
  std::cout << "your Programming is: " << program[1] << " and the range you would like is: " 
			<< program[2] << "-" << program[3] << std::endl;
  //program[3];
  std::cout << "your Design is: " << design[1] << " and the range you would like is: " 
			<< design[2] << "-" << design[3] << std::endl;
  //design[3];
  std::cout << "your Organisation is: " << organiz[1] << " and the range you would like is: " 
			<< organiz[2] << "-" << organiz[3] << std::endl;
  //organiz[3];
  std::cout << "your Testing is: " << testing[1] << " and the range you would like is: " 
			<< testing[2] << "-" << testing[3] << std::endl;
  //testing[3];
  std::cout << "your Communication is: " << comm[1] << " and the range you would like is: " 
			<< comm[2] << "-" << comm[3] << std::endl;
  //comm[3];
  std::cout << "your Leadership is: " << lead[1] << " and the range you would like is: " 
			<< lead[2] << "-" << lead[3] << std::endl;
  //lead[3];
  std::cout << "your Adaptability is: " << adapt[1] << " and the range you would like is: " 
			<< adapt[2] << "-" << adapt[3] << std::endl;
  //adapt[3];
  std::cout << "your Assertiveness is: " << assert[1] << " and the range you would like is: " 
			<< assert[2] << "-" << assert[3] << std::endl;
  //assert[3];
  std::cout << "your Perseverance is: " << persev[1] << " and the range you would like is: " 
			<< persev[2] << "-" << persev[3] << std::endl;
  //persev[3];
  std::cout << "your Obedience is: " << obedience[1] << " and the range you would like is: " 
			<< obedience[2] << "-" << obedience[3] << std::endl;
  //obedience[3]; //or cooperative
  std::cout << "your Punctuality is: " << punctual[1] << " and the range you would like is: " 
			<< punctual[2] << "-" << punctual[3] << std::endl;
  //punctual[3];
  std::cout << "your Reliability is: " << reliable[1] << " and the range you would like is: " 
			<< reliable[2] << "-" << reliable[3] << std::endl;
  //reliable[3];
std::cout << "your Area of Interest is: "<< aoi << std::endl;
  //aoi; //area of interest
std::cout << "your Teamwork is: " << team[1] << " and the range you would like is: " 
			<< team[2] << "-" << team[3] << std::endl;
  //team[3];
  std::cout << "your Independance is: " << independent[1] << " and the range you would like is: " 
			<< independent[2] << "-" << independent[3] << std::endl;
  //independent[3];
}
