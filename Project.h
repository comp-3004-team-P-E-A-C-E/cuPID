class Student;
class Admin;

class Project {
  int teamSize;
  char* name;
  Student* Students;
  Admin* owner;
  
  public:
  Project(char*);
  bool addStudent(Student*);
  void setTeamSize(int);
};
