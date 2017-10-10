#ifndef _SIMPLE_LIST_HPP_
#define _SIMPLE_LIST_HPP_

#include <iostream>

class SimpleListCell
{
public:
	SimpleListCell(double content) {
		this->content = content;
		ptr_next = NULL;
	}
	double content;
	SimpleListCell *ptr_next;
};

class SimpleList
{
private:
	SimpleListCell *ptr_head;
	int len;
public:
	SimpleList();

	void pushback(double content);
	void print();
	bool Delete(int id);
	bool pop();
	bool insert(int id, double content);

};

#endif