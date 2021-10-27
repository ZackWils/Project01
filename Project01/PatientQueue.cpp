#include "PatientQueue.hpp"

PatientQueue::PatientQueue()
{
	this->head = nullptr;
}

PatientQueue::~PatientQueue()
{
	if (this->head) {
		delete this->head;
		this->head = nullptr;
	}
}

bool PatientQueue::is_empty()
{
	return this->head == nullptr;
}

bool PatientQueue::insert_with_priority(Patient p, int priority)
{
	Node* node = new Node(p, priority);

	if (this->is_empty()) {
		this->head = node;
		return true;
	}
	else if (head->priority > priority) {
		node->next = head;
		this->head = node;
		return true;
	}

	//Traverse list and find appropriate location based on priority
	Node* current = this->head;
	while (current->next != nullptr && current->next->priority < priority)
	{
		current = current->next;
	}

	//Insert at correct priority
	node->next = current->next;
	current->next = node;

	return true;
}

Patient PatientQueue::pull_highest_priority_element()
{
	Patient thePatient = head->patient;
	head = head->next;
	return thePatient;
}

Patient PatientQueue::peek()
{
	return head->patient;
}




//traversal and print values of the list (Caleb)
void PatientQueue::traverse()
{
	Node* current = this->head;
	while (current != nullptr)
	{
		std::cout << "Printed List:" << current->priority << std::endl;
		current = current->next;
	}
	std::cout << std::endl;
}

//traverse then traverse back and print values (Caleb)
void PatientQueue::reverseTraverse()
{
	Node* current = this->head;
	while (current != nullptr)
	{
		current = current->next;
	}
	std::cout << "Printed List:";
	while (current != this->head)
	{
		std::cout << current->priority;
		current = current->prev;
	}
	std::cout << current->priority << std::endl;
}
