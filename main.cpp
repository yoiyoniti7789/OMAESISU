#include <stdio.h>
#include <list>
#include <iostream>
using namespace std;

int main() {

	list<int> lst{1,2,3};
	auto itr = lst.begin();
	cout << *itr << endl;
	*itr = 9;
	cout << *itr << endl;
	itr++;
	*itr = 10;
	cout << *itr << endl;
	lst.push_front(114);
	lst.push_back(514);
	for (auto itr = lst.begin();itr != lst.end();++itr) 
	{
		cout << *itr << "\n";
	}

	return 0;
}