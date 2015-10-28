#include "Project.h"
#include "Student.h"
#include "Admin.h"

Project::Project(char* n) {
  name = n;
}

bool Project::addStudent(Student* s) {
  //something like addPirate from the 2404 stuff, I don't remember how to do it
}

void Project::setTeamSize(int i) {
  teamSize = i;
}
