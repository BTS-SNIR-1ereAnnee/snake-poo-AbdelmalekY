#ifndef SNAKE_H
#define SNAKE_H


#include "Point.h"
#include <ncurses.h>

class Point;
class snake
{

private:
	Point serpent[20];
	int m_index;


public:
	void ajouterPoint(Point p);
	void afficher();
};

#endif