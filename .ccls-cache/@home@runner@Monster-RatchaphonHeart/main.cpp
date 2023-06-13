#include <iostream>
#include "Thanos.h"
using namespace std;

int main() {

  Thanos T;
  int n;
  cout << "How many monster? ";
  cin >> n;

  monster *m = new monster[n];

  for (int i; i < n; i++) {
    m[i] = monster(to_string(i + 1), 20, 10);
  }

  cout << endl << "The Battle Begins" << endl << endl;
 
  ++T;
  ++T;
  cout << "Thanos prepares for the first snap!" << endl;
  T.snap_finger(m, n);
  ++T;
  ++T;
  cout << "Thanos prepares for the second snap!" << endl;
  T.snap_finger(m, n);
  ++T;
  ++T;

  cout << "Thanos prepares for the third snap!" << endl;
  T.snap_finger(m, n);

  cout << endl << "The Battle Ends" << endl;
  cout << "Monster that Survived:" << endl;
 
  int i;
  for (i = 0; i < n; i++) {
    if (m[i].not_dead()) {
      m[i].print();
    }
  }

  delete[] m;
}