#include "../Headers/Header.hpp"
#include "../Headers/Personnage.hpp"

int main() {
  Personnage goliath("Epée aiguisée", 20), hercule("Hercule", 200, 150, "Epée enchantée", 3);
  Personnage david(goliath);

  david.attaquer(hercule);

  cout << "Goliath" << endl;
  goliath.afficherEtat();
  cout << endl;

  hercule.afficherEtat();
  cout << endl;

  cout << "David" << endl;
  david.afficherEtat();
  cout << endl << endl;

  cout << "Hercule est " << (hercule.estVivant() ? "vivant" : "mort") << " !" << endl;

  return 0;
}