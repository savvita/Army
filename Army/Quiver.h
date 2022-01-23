#pragma once
#include"Arrow.h"

struct Node
{
	Arrow* arrow;
	Node* prev;
	Node(Arrow* arrow, Node* prev)
	{
		this->arrow = arrow;
		this->prev = prev;
	}
};

class Quiver
{
private:
	Node* tail = NULL;

	void addArrow(Arrow* arrow);

public:
	Quiver();

	Arrow* getArrow();

	bool isEmpty() const;

	~Quiver();
};

