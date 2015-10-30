#include "User.h"
#include "Admin.h"
#include "Student.h"
#include "Project.h"
#include "ProjectControl.h"
#include <iostream>

int main(int argc, char** argv) {
  //just for testing stuff
  ProjectControl pc = ProjectControl();
  char* n = "name";
  Admin* a = new Admin(n);
  Admin* b = new Admin(n);
  Student* s = new Student(n);

  pc.createProj(a, n);
  Project* p = pc.getProj(0);
  pc.addStu(s, p);
  pc.addStu(s, p);
  std::cout << p << std::endl;
  //pc.removeStu(s, p);
  std::cout << s << std::endl;

  std::vector<Project*> j = pc.getJoined(s);
  std::vector<Project*> o = pc.getOwned(b);
  std::cout << o.size() << std::endl;
  return 0;
}
