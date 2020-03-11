#ifndef SNAKE_H
#define SNAKE_H


#include "Point.h"
#include <ncurses.h>

class Point;
class Snake
{

private:
	Point serpent[20];
	int m_index;


public:
	Snake();
	~Snake();
	void ajouterPoint(Point p);
	void afficher();
	Point changementXYPoint(Point pointPrecedent,Point pointChange);
};

#endif