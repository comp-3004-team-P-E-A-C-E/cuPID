#ifndef PROJECTCONTROL_H
#define PROJECTCONTROL_H
#include <vector>
#include <string>

class Project;
class Student;
class Admin;

class ProjectControl {
  public:
  bool createProj(Admin*, std::string);
  bool addStu(Student*, Project*);
  bool removeStu(Student*, Project*);
  Project* getProj(int);
  void editTeamSize(Project*, int);

  std::vector<Project*> getJoined(Student*);
  std::vector<Project*> getOwned(Admin*);

  private:
  std::vector<Project*> projects;
};
#endif
