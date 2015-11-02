#ifndef PROJECT_H
#define PROJECT_H
#include <vector>
#include <string>

class Student;
class Admin;

class Project {
  friend class ProjectControl;

  int teamSize;
  std::string name;
  std::vector<Student*> students;
  Admin* owner;
  
  public:
  Project(std::string, Admin*);
  bool containsStu(Student*);
  Student* getStu(int);
  void setTeamSize(int);
  std::string getName();
  int getNumStu();
};
#endif
