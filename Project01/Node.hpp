#pragma once
#include <string>
#include "Patient.hpp"

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