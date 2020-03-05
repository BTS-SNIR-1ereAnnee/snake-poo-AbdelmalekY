#include "snake.h"
#include "Point.h"
#include <iostream>

using namespace std;


void snake::ajouterPoint(Point p)
{
	int blockBoucle=0;//variable qui va bloquer la boucle si on ajoute un caractere dans le tableau serpent
	do{
	for (int i = 0; i < 20; ++i)
	{
		if (serpent[i]!='*')
		{
			serpent[i]='*';
			blockBoucle=1;
		}
	}
}while(blockBoucle==0);



}


