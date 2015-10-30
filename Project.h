#include <vector>
#include <vector>

class Student;
class Admin;

class Project {
  friend class ProjectControl;

  int teamSize;
  char* name;
  std::vector<Student*> students;
  Admin* owner;
  
  public:
  Project(char*, Admin*);
  bool containsStu(Student*);
  Student* getStu(int);
  void setTeamSize(int);
};
