#if !defined(HUMAIN)
#define HUMAIN
#include <string>

//définition de la classe

class Arme
{
public:
   Arme();
   Arme(std::string nom, int degats);
   void afficher() const;
   void changer(std::string nom, int degats);
   int getDegats() const {return mDegats;}

private:
   std::string mNom;
   int mDegats;
};

#endif