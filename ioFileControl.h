#ifndef IOFILECONTROL_H
#define IOFILECONTROL_H
#include <vector>
#include "Student.h"
#include "Admin.h"

class ioFileControl{
	public:
	std::vector<Student*> stuInput(std::vector<Student*>);
	std::vector<Admin*> admInput(std::vector<Admin*>);
	void stuOutput(std::vector<Student*>);
	void admOutput(std::vector<Admin*>);
};
#endif
