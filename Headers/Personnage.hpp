#if !defined(PERSONNAGE)
#define PERSONNAGE

#include <string>
 
class Personnage {
  public:
    Personnage();
    Personnage(std::string nomArme, int degatsArme);
    Personnage(int vie, int mana, std::string nomArme, int degatsArme);
    Personnage(Personnage const& autre);
    ~Personnage();
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage *cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant() const;
    
  private:
    int m_vie;
    int m_mana;
    std::string m_nomArme;
    int m_degatsArme;
};

#endif // PERSONNAGE
