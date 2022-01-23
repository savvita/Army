#include "Figth.h"

void Figth::_fillSquad(Squad& s)
{
	std::cout << "Enter a name of squad: ";
	std::string name;
	getline(std::cin, name);

	s.setName(name);

	std::cout << "Press 1 to get random squad (any key for manual filling):\n";

	char ch;
	ch = _getch();

	if (ch == '1')
	{
		unsigned int max = 1;

		std::cout << "Enter a maximum of soldiers: ";
		std::cin >> max;
		std::cin.ignore();

		this->_getRandomSquad(s, max);

		system("cls");

		std::cout << "Squad \"" << s.getName() << "\" has : \n";
		s.print();
		system("pause");
	}

	else
	{
		do
		{
			system("cls");

			std::cout << "Squad \"" << s.getName() << "\" already has : \n";
			s.print();
			std::cout << "===================================\n";
			std::cout << "1 - add a swordman\n";
			std::cout << "2 - add a horseman\n";
			std::cout << "3 - add a bowman\n";
			std::cout << "0 - exit\n";
			std::cout << "===================================\n";

			ch = _getch();

			if (ch == '0')
				break;

			switch (ch)
			{
			case '1':
				s.addSoldier(new Swordman());
				std::cout << "Swordman is added...\n";
				break;

			case '2':
				s.addSoldier(new Horseman());
				std::cout << "Horseman is added...\n";
				break;


			case '3':
				s.addSoldier(new Bowman());
				std::cout << "Bowman is added...\n";
				break;

			default:
				std::cout << "Wrong choise\n";
				break;
			}

			Sleep(1000);

		} while (true);
	}
}

void Figth::_attack(Squad& s1, Squad& s2)
{
	std::cout << "Squad \"" << s1.getName() << "\" attacks squad \"" << s2.getName() << "\"\n";
	s1.attack(s2);
	std::cout << "===================================\n";
}

void Figth::_getRandomSquad(Squad& s, unsigned int max)
{
	unsigned int count = 1 + rand() % max;

	for (unsigned int i = 0; i < count; i++)
	{
		unsigned int t = rand() % 3;
		switch (t)
		{
		case 0:
			s.addSoldier(new Swordman());
			break;

		case 1:
			s.addSoldier(new Horseman());
			break;

		case 2:
			s.addSoldier(new Bowman());
			break;
		}
	}
}

Figth::Figth() :s1{ Squad() }, s2{ Squad() }
{
	std::cout << "Fill the first squad\n";
	this->_fillSquad(s1);

	system("cls");

	std::cout << "Fill the second squad\n";
	this->_fillSquad(s2);
}

Squad* Figth::figth()
{
	system("cls");
	while(true)
	{
		if (this->s1.isEmpty() || this->s2.isEmpty())
			return nullptr;

		this->_attack(this->s1, this->s2);

		if (this->s2.isEmpty())
		{
			std::cout << "Squad \"" << this->s2.getName() << "\" is destroyed!\n";
			return &this->s1;
		}

		this->_attack(this->s2, this->s1);

		if (this->s1.isEmpty())
		{
			std::cout << "Squad \"" << this->s1.getName() << "\" is destroyed!\n";
			return &this->s2;
		}
	}
}
