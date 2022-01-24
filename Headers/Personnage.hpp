#if !defined(PERSONNAGE)
#define PERSONNAGE

#include <iostream>
#include <string>
#include "../Headers/Arme.hpp"
 
class Personnage {
  public:
    Personnage();
    Personnage(std::string nom);
    Personnage(std::string nomArme, int degatsArme);
    Personnage(std::string nom, int vie, int mana, std::string nomArme, int degatsArme);
    Personnage(Personnage const& autre);
    ~Personnage();
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant() const;
    void afficherEtat() const;

  private:
    std::string m_nom;
    int m_vie;
    int m_mana;
    Arme m_arme;
};

#endif // PERSONNAGE
