#include "Snake.h"
#include "Point.h"
#include <ncurses.h>
#include <iostream>

using namespace std;


Snake::Snake()
{
	this-> m_index=0;


}

Snake::~Snake()
{



}

void Snake::ajouterPoint(Point p)
{
	this->serpent[m_index]=p;

	m_index++;
	
}

void Snake::afficher()
{
	Point pointTemp;
	serpent[0].drawPoint();
	for (int i = 1; i < m_index; i++)
	{
		pointTemp=serpent[i];//stock la valeur
		serpent[i].drawPoint();//affiche le point
		changementXYPoint(serpent[i-1],serpent[i]);//changement de coordonnées
	}
	
	
}

Point Snake::changementXYPoint(Point pointPrecedent,Point pointChange)
{
	pointChange=pointPrecedent;

 	return pointPrecedent;
}
 
