#ifndef GROUPMANAGER_H
#define GROUPMANAGER_h

#include "Group.h"
#include <vector>
using namespace std;

class GroupManager {
public:
	void addGroup(const Group& g);
	void printAllGroups();

private:
	vector<Group>groups;
};

#endif
