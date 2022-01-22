#include "../Headers/Header.hpp"
#include "../Headers/Personnage.hpp"

int main() {
  Personnage david, goliath("Epée aiguisée", 20), hercule(20, 150, "Epée enchantée", 3);

  goliath.attaquer(&hercule);

  if(hercule.estVivant()) {
    cout << "Hercule est vivant !";
  } else {
    cout << "Hercule est mort !";
  }

  return 0;
}