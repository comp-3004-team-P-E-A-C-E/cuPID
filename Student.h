#ifndef STUDENT_H
#define STUDENT_H
#include "User.h"
#include "Profile.h"

class Student : public User {
  Profile* profile;
  
  public:
  Student(std::string);
  std::string getName();
  Profile* getProfile();
};
#endif
