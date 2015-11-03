#ifndef PROJECTCONTROL_H
#define PROJECTCONTROL_H
#include <vector>
#include <string>

class Project;
class Student;
class Admin;
class Repository;

class ProjectControl {
  public:
  ProjectControl();
  bool createProj(Admin*, std::string);
  bool addProj(Project*);
  bool addStu(Student*, Project*);
  bool removeStu(Student*, Project*);
  Project* getProj(int);
  void editTeamSize(Project*, int);

  std::vector<Student*> getStuList(Project*);
  std::vector<Project*> getJoined(Student*);
  std::vector<Project*> getOwned(Admin*);

  Repository* rep;

  private:
  std::vector<Project*> projects;
};
#endif
