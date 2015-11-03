#include "Repository.h"

Repository::Repository() {
  students = new std::vector<Student*>();
  admins = new std::vector<Admin*>();
}
std::vector<Student*>* Repository::getStudents() { return students; }
std::vector<Admin*>* Repository::getAdmins() { return admins; }
