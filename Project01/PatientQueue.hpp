#pragma once
#include "Node.hpp"
#include <iostream>
//DECLARE CLASS LinkedList
//DECLARE Node pointer head
//DECLARE constructor
//DECLARE virtual destructor
//DECLARE bool append(Node pointer node) method
//DECLARE bool prePend(Node pointer node) method
//DECLARE bool deleteByValue(STRING data) method
//DECLARE void traverse method
//ENDDECLARE

class PatientQueue
{
	Node* head;

public:
	PatientQueue();
	virtual ~PatientQueue();
	bool is_empty();
	bool insert_with_priority(Patient p, int priority);
	Patient pull_highest_priority_element();
	Patient peek();
	void traverse();
	void reverseTraverse();
};