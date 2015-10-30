#include "ProjectControl.h"
#include "Project.h"
#include "Student.h"
#include "Admin.h"
#include <iostream>
#include <algorithm>

bool ProjectControl::createProj(Admin* a, std::string n) { 
  projects.push_back(new Project(n, a)); 
}

bool ProjectControl::addStu(Student* s, Project* p) {
  if(!p->containsStu(s))
    p->students.push_back(s);
}

bool ProjectControl::removeStu(Student* s, Project* p) {
  p->students.erase(std::remove(p->students.begin(), p->students.end(), s), p->students.end());
}

Project* ProjectControl::getProj(int i) {
  if(projects.size() > i)
    return projects[i];
  return 0;
}

void ProjectControl::editTeamSize(Project* p, int i) {
    p->teamSize = i;
}

//returns projects the student is in
std::vector<Project*> ProjectControl::getJoined(Student* s) {
  std::vector<Project*> j;
  std::vector<Project*>::iterator it;
  std::vector<Student*>::iterator it2;
  for(it = projects.begin(); it != projects.end(); it++)
    for(it2 = ((*it)->students).begin(); it2 != ((*it)->students).end(); it2++)
  	if(*it2 == s) {
          j.push_back(*it);
          break;
        }
  return j;
  
}
std::vector<Project*> ProjectControl::getOwned(Admin* a) {
  std::vector<Project*> o;
  std::vector<Project*>::iterator it;
  for(it = projects.begin(); it != projects.end(); it++)
    if((*it)->owner == a) 
          o.push_back(*it);
  return o;
}
