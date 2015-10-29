#include "User.h"
#include "Admin.h"
#include "Student.h"
#include "Project.h"
#include <iostream>

int main(int argc, char** argv) {
  char* n = "name";
  Admin* u = new Admin(n);
  Student* s = new Student(n);
  Project* p = new Project(n, u);
  p->addStudent(s);
  n = u->name;
  std::cout << p->containsStu(s) << std::endl;
  return 0;
}
