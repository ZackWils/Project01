#pragma once
#include <string>
#include "Patient.hpp"
//DECLARE CLASS Node
//DECLARE STRING data
//DECLARE Node pointer next
//DECLARE constructor
//DECLARE virtual destructor
//ENDDECLARE

class Node
{
public:
	Node();
	Node(Patient p, unsigned int priority);
	~Node();
	int priority;
	Patient patient;

	Node* next;
	Node* prev;
};
