#include "iostream"
#include "monster.h"
using namespace std;

class Thanos {
private:
  int stones;
  int hp; // extra hp;
public:
  /* constructor and destructor */
  Thanos(int = 0, int = 1000); // stone hp
  ~Thanos();
  void snap_finger(monster[], int);
  /* show all hps
  / clear half of monster hp, if stone =6*/
  void operator++(); // increase the stone;
};

Thanos::Thanos(int stones, int hp) {
  this->stones = stones;
  this->hp = hp;
}

Thanos::~Thanos() {
  // Destructor implementation, if needed
}

void Thanos::snap_finger(monster m[], int n) {
  // Show all monster hps
  for (int i = 0; i < n; i++) {
    m[i].print();
  }

  // Clear half of the monsters' hp if stones = 6
  if (stones == 6) {
    for (int i = 0; i < n; i = i + 2) {
      m[i].setHP(m[i].getHP() - m[i].getHP());
    }
    cout << "I AM Ironman Jk I'm Thanos" << endl;
  }
  else
  {
    cout << "Snap Failed!" << endl << endl;
  }
}

void Thanos::operator++() {
  // Increase the stone
  stones++;
}