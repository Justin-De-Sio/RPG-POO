#include <iostream>
#include "Personnage.h"

using namespace std;

int main()
{
     //Création des personnages
     Personnage p1("Epee aiguisee", 20, "david");
     Personnage p2("Epee aiguisee+", 30, "goliath");

   


     p1.attaquer(p2);
     p2.attaquer(p1);
     p2.boirePotionDeVie(20);

     p1.afficherEtat();
     p2.afficherEtat();

     return 0;
}