#include "Node.hpp"

Node::Node()
{
	this->priority = 0;
	this->next = nullptr;
	this->prev = nullptr;
}

Node::Node(Patient p, unsigned int priority)
{
	this->priority = priority;
	this->patient = p;
	this->next = nullptr;
}

Node::~Node()
{
	delete(this);
}