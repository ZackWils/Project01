#pragma once
#include "Node.hpp"
#include <iostream>
#include <iomanip>

class PatientQueue
{
public:
	Node* head;
	PatientQueue();
	virtual ~PatientQueue();
	bool is_empty();
	bool insert_with_priority(Patient p, int priority = 0);
	Patient pull_highest_priority_element();
	Patient peek();
	void traverse();
	void reverseTraverse();
};