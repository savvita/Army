#include <iostream>
#include"Bow.h"

int main()
{
	while (true)
	{
		Bow b;
		for (size_t i = 0; i < 50; i++)
		{
			b.hit();
		}
	}
}