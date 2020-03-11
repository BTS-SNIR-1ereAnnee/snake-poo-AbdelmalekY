/*
 Projet: snake
 Auteur: Sylvain Guilbert
*/
#include <iostream>
#include "Point.h"
#include "Board.h"
#include "Snake.h"

using namespace std;

int main()
{

    Snake serpent;
    Point p(10,5),p2(10,6),p3(10,7);
    
    // pointeurs sur l'unique instance de la classe UniqueObject
    Board *fenetre;
    // initialisation des pointeurs
    fenetre = Board::getInstance ();

    serpent.ajouterPoint(p);//point de depart
    serpent.ajouterPoint(p2);
    serpent.ajouterPoint(p3);
    serpent.afficher();
    getch();
for (int i = 0; i < 3; ++i)
{
    p.moveUp();
    serpent.ajouterPoint(p);
    serpent.afficher();
}
    
   
    //refresh();



    

   

   

    //cout << "press any key to quit" << endl;
    getchar();
    fenetre->kill();


    return 0;
}
