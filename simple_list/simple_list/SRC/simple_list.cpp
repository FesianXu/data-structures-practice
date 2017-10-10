#include "simple_list.hpp"

using namespace std;

SimpleList::SimpleList()
{
	ptr_head = new SimpleListCell(0);
	len = 0;
}

void SimpleList::pushback(double content)
{
	SimpleListCell *new_cell = new SimpleListCell(content);
	SimpleListCell *tmp = ptr_head;
	while (tmp->ptr_next != NULL)
		tmp = tmp->ptr_next;
	tmp->ptr_next = new_cell;
	new_cell->ptr_next = NULL;
	len++;
}

bool SimpleList::pop()
{
	SimpleListCell *tmp = ptr_head;
	if (ptr_head->ptr_next == NULL)
		return false;
	while (tmp->ptr_next->ptr_next != NULL)
		tmp = tmp->ptr_next;
	delete tmp->ptr_next;
	tmp->ptr_next = NULL;
	len--;
	return true;
}

bool SimpleList::Delete(int id)
{
	SimpleListCell *tmp_jump = NULL;
	if (id >= len || id < 0)
		return false;
	SimpleListCell *tmp = ptr_head;
	for (int i = 0; i < id; i++)
		tmp = tmp->ptr_next;
	if (tmp->ptr_next->ptr_next != NULL){
		tmp_jump = tmp->ptr_next->ptr_next;
		delete tmp->ptr_next;
		tmp->ptr_next = tmp_jump;
		len--;
	}
	else 
		pop();
	return true;
}

bool SimpleList::insert(int id, double content)
{
	SimpleListCell *new_cell = new SimpleListCell(content);
	SimpleListCell *ptr_jump = NULL;
	if (id >= len || id < 0)
		return false;
	SimpleListCell *tmp = ptr_head;
	for (int i = 0; i < id; i++)
		tmp = tmp->ptr_next;
	ptr_jump = tmp->ptr_next;
	tmp->ptr_next = new_cell;
	new_cell->ptr_next = ptr_jump;
	len++;
}

void SimpleList::print()
{
	SimpleListCell *tmp = ptr_head;
	while (tmp->ptr_next != NULL){
		cout << tmp->ptr_next->content << endl;
		tmp = tmp->ptr_next;
	}
}
