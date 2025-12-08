#include "GroupManager.h"
#include <iostream>
using namespace std;

void GroupManager::addGroup(const Group& g)
{
	groups.push_back(g);
}

void GroupManager::printAllGroups()
{
	for (int i = 0; i < groups.size(); i++)
	{
		groups[i].printGroup();
	}
}