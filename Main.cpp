#include "User.h"
#include "Admin.h"
#include "Student.h"
#include <iostream>

int main(int argc, char** argv) {
  char* n = "name";
  Admin* u = new Admin(n);
  n = u->name;
  std::cout << (n) << std::endl;
  return 0;
}
