#include "../Headers/Personnage.hpp"
#include "../Headers/Header.hpp"

Personnage::Personnage() : m_vie(100), m_mana(100), m_nomArme("Epée rouillée"), m_degatsArme(10) {
}

Personnage::Personnage(string nomArme, int degatsArme) : m_vie(100), m_mana(100), m_nomArme(nomArme), m_degatsArme(degatsArme) {
}

Personnage::Personnage(int vie, int mana, string nomArme, int degatsArme) : m_vie(vie), m_mana(mana), m_nomArme(nomArme), m_degatsArme(degatsArme) {
}

Personnage::Personnage(Personnage const& autre) : m_vie(autre.m_vie), m_mana(autre.m_mana), m_nomArme(autre.m_nomArme), m_degatsArme(autre.m_degatsArme) {
}

Personnage::~Personnage() {

}

void Personnage::recevoirDegats(int nbDegats) {
  m_vie -= nbDegats;
  if(m_vie < 0) {
    m_vie = 0;
  }
}

void Personnage::attaquer(Personnage *cible) {
  cible->recevoirDegats(m_degatsArme);
}

void Personnage::boirePotionDeVie(int quantiterPotion) {
  m_vie += 20;
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme) {
  m_nomArme = nomNouvelleArme;
  m_degatsArme = degatsNouvelleArme;
}

bool Personnage::estVivant() const {
  return m_vie > 0;
}
