#ifndef PROFILE_H
#define PROFILE_H
#include <string>

class Profile {
  
  std::string owner;
  public:
  //gpa[0] = yours, gpa[2-3] range you are looking for
  float gpa[3];
  //target grade
  int grade;
  //availability (1-7 for days of the week)
  short time;
  //skills - similar format to gpa
  short creat[3];
  short program[3];
  short design[3];
  short organiz[3];
  short testing[3];
  short comm[3];
  short lead[3];
  
  short adapt[3];
  short assert[3];
  short persev[3];
  short obedience[3]; //or cooperative
  short punctual[3];
  short reliable[3];

  int aoi; //area of interest

  short team[3];
  short independent[3];
  
  public:
  Profile(std::string);
  void printProfile();
  
};

#endif
