#include "Personnage.h"
#include <string>
using namespace std;

Personnage::Personnage() : m_vie(100), m_mana(100)
{
}

Personnage::Personnage(string nomArme, int degatsArme, std::string nomPersonnage) : m_vie(100), m_mana(100), m_arme(nomArme, degatsArme), m_nomPersonnage(nomPersonnage)
{
}

void Personnage::afficherEtat() const
{
   cout << endl
        << endl;
   cout << "Personnage : " << m_nomPersonnage << endl;
   cout << "Vie : " << m_vie << endl;
   cout << "Mana : " << m_mana << endl;
   m_arme.afficher();
}

void Personnage::recevoirDegats(int nbDegats)
{
   m_vie -= nbDegats;
   //On enlève le nombre de dégâts reçus à la vie du personnage

   if (m_vie < 0) //Pour éviter d'avoir une vie négative
   {
      m_vie = 0; //On met la vie à 0 (cela veut dire mort)
   }
}

void Personnage::attaquer(Personnage &cible)
{
   cible.recevoirDegats(m_arme.getDegats());
   Personnage *adver = &cible;
   Personnage adverR = *adver;
   //On inflige à la cible les dégâts que cause notre arme
   cout << m_nomPersonnage << " fait " << m_arme.getDegats() << "de degats a " << cible.m_nomPersonnage << endl;
}

void Personnage::boirePotionDeVie(int quantitePotion)
{
   m_vie += quantitePotion;

   if (m_vie > 100) //Interdiction de dépasser 100 de vie
   {
      m_vie = 100;
   }
   cout << m_nomPersonnage << " gagne " << quantitePotion << " HP grace a une potion " << endl;
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
   m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
}

bool Personnage::estVivant() const
{
   return m_vie > 0;
}
