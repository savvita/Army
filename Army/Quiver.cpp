#include "Quiver.h"

void Quiver::addArrow(Arrow* arrow)
{
	Node* newNode = new Node(arrow, this->tail);
	this->tail = newNode;
}

Quiver::Quiver()
{
	for (size_t i = 0; i < 20; i++)
	{
		this->addArrow(new Arrow());
	}
}

Arrow* Quiver::getArrow()
{
	if (this->tail == NULL)
		return NULL;
	
	Arrow* arrow = this->tail->arrow;

	Node* tmp = this->tail;
	this->tail = this->tail->prev;
	delete tmp;

	return arrow;
}

Quiver::~Quiver()
{
	while (this->tail != NULL)
	{
		Node* tmp = this->tail;
		delete tmp->arrow;
		this->tail = tmp->prev;
		delete tmp;
	}
}
