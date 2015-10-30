OBJ = main.o Student.o Admin.o Project.o User.o Profile.o ioFileControl.o ProjectControl.o

a1:	$(OBJ)
	g++ -o a1 $(OBJ)

main.o:	main.cpp
	g++ -c main.cpp

User.o:	User.cpp User.h 
	g++ -c User.cpp

Admin.o:	Admin.cpp Admin.h 
	g++ -c Admin.cpp

Student.o:	Student.cpp Student.h
	g++ -c Student.cpp

Project.o:	Project.cpp Project.h
	g++ -c Project.cpp
	
Profile.o:	Profile.cpp Profile.h
	g++ -c Profile.cpp
	
ioFileControl.o:	ioFileControl.cpp ioFileControl.h
	g++ -c ioFileControl.cpp
	
ProjectControl.o:	ProjectControl.cpp ProjectControl.h
	g++ -c ProjectControl.cpp

clean:
	rm -f *.o a1

