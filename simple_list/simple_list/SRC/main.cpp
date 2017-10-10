#include "simple_list.hpp"
#include <iostream>

using namespace std;

void main(void)
{
	SimpleList list;

	for (int i = 0; i < 10; i++)
		list.pushback(i*0.10);
	for (int i = 0; i < 101; i++)
		list.pop();
	for (int i = 0; i < 10; i++)
		list.pushback(i*0.10);
	list.print();

	system("pause");
}