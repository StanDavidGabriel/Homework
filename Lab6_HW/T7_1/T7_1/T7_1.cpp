#include <iostream>
#include "Group.h"
#include "GroupManager.h"

using namespace std;

int main()
{
	GroupManager manager;

	Group C1("CEN 2.1");
	C1.addStudent(Group::Student("David", 20, 10));
	C1.addStudent(Group::Student("Alin", 20, 8.6));
	C1.addStudent(Group::Student("Maria", 19, 7));

	Group C2("CEN 2.2");
	C2.addStudent(Group::Student("Darius", 20, 9.5));

	manager.addGroup(C1);
	manager.addGroup(C2);

	manager.printAllGroups();

}