#ifndef IOFILECONTROL_H
#define IOFILECONTROL_H
#include <vector>
#include "Student.h"
#include "Admin.h"
#include "Project.h"
#include "ProjectControl.h"

class ioFileControl{
	public:
	void stuInput(std::vector<Student*>*);
        void admInput(std::vector<Admin*>*);
        void prjInput(ProjectControl*, std::vector<Admin*>, std::vector<Student*>);
	void stuOutput(std::vector<Student*>);
	void admOutput(std::vector<Admin*>);
        void prjOutput(ProjectControl*);
};
#endif
