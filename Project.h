#include <vector>

class Student;
class Admin;

class Project {
  int teamSize;
  char* name;
  std::vector<Student*> students;
  Admin* owner;
  
  public:
  Project(char*, Admin*);
  bool addStudent(Student*);
  bool removeStudent(Student*);
  bool containsStu(Student*);
  Student* getStu(int);
  void setTeamSize(int);
};
