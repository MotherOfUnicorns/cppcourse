#include <iostream>
#include "linked_list.h"

int main()
{
	LinkedList<int> l;
	l.Append(1);
	l.Append(2);
	l.Append(3);

	std::cout << "l:" << l << std::endl;

	LinkedList<int> lCopyConstructed(l);
	std::cout << "lCopyConstructed:" << lCopyConstructed << std::endl;
	
	LinkedList<int> lAssigned;
	lAssigned = l;
	std::cout << "lAssigned:" << lAssigned << std::endl;

	return 0;
}

