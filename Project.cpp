#include "Project.h"
#include "Student.h"
#include "Admin.h"
#include <algorithm>

Project::Project(char* n, Admin* a) {
  name = n;
  owner = a;
}

bool Project::addStudent(Student* s) {
  students.push_back(s);
}

bool Project::removeStudent(Student* s) {
  std::vector<Student*>::iterator it;
  for(it = students.begin(); it != students.end(); it++)
  	if(*it == s) students.erase(it);
}

bool Project::containsStu(Student* s) {
  if(std::find(students.begin(), students.end(), s) != students.end())
    return true;
  return false;
}

Student* Project::getStu(int i) {
  if(i < students.size()-1) 
    return students[i];
  return NULL;
}

void Project::setTeamSize(int i) {
  teamSize = i;
}
