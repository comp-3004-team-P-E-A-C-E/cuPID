#include "Project.h"
#include "Student.h"
#include "Admin.h"
#include <algorithm>

Project::Project(std::string n, Admin* a) {
  name = n;
  owner = a;
}

bool Project::containsStu(Student* s) {
  if(std::find(students.begin(), students.end(), s) != students.end())
    return true;
  return false;
}

Student* Project::getStu(int i) {
  if(i < students.size()) 
    return students[i];
  return NULL;
}

Admin* Project::getAdm() {
  return owner;
}

void Project::setTeamSize(int i) {
  teamSize = i;
}

int Project::getTeamSize() {
  return teamSize;
}

std::string Project::getName(){
	return name;
}

int Project::getNumStu(){
	return students.size();
}
