#pragma once
#include<conio.h>
#include<Windows.h>
#include<string>
#include"Squad.h"
#include"Soldiers.h"

class Figth
{
private:
	Squad s1;
	Squad s2;

	void _fillSquad(Squad& s);
	void _attack(Squad& s1, Squad& s2);
	void _getRandomSquad(Squad& s, unsigned int max);

public:
	Figth();

	Squad* figth();
};

