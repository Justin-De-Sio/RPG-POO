
#include "Arme.h"
#include <string>
#include <iostream>
using namespace std;
//implémentation des méthodes de la classe.

Arme::Arme() : mNom("épée"), mDegats(10)
{
}

Arme::Arme(std::string nom, int degats) : mNom(nom), mDegats(degats)
{
}

void Arme::changer(std::string nom, int degats)
{
   mNom = nom;
   mDegats = degats;
}

void Arme::afficher() const
{
   cout << "Arme : " << mNom << " (Degats : " << mDegats << ")" << endl
        << endl
        << endl;
}
