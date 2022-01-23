#if !defined(ARME)
#define ARME

#include <iostream>
#include <string>

class Arme {
  private:
    std::string m_nom;
    int m_degats;
  public:
    Arme();
    Arme(std::string nom, int degats);
    ~Arme();
    void changer(std::string nom, int degats);
    void afficher() const;
    int getDegats() const;
};

#endif // ARME