#include "Admin.h"

Admin::Admin(std::string n) : User(n){}

std::string Admin::getName(){
  return name;
}
