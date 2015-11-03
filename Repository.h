#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <vector>

class Admin;
class Student;
class Project;

class Repository {
  std::vector<Student*>* students;
  std::vector<Admin*>* admins;

public:
  Repository();

  std::vector<Student*>* getStudents();
  std::vector<Admin*>* getAdmins();
};
#endif
