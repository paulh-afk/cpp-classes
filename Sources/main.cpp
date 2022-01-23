#include "../Headers/Header.hpp"
#include "../Headers/Personnage.hpp"

int main() {
  Personnage goliath("Epée aiguisée", 20), hercule(20, 150, "Epée enchantée", 3);
  Personnage david(goliath);

  david.attaquer(hercule);

  cout << "Hercule est " << (hercule.estVivant() ? "vivant" : "mort") << " !";

  return 0;
}