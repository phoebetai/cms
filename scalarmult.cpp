#include <iostream>

using namespace std;

double scalar_mult(double v[3], double s) {

  for (int i = 0; i < 3; i++) {
    v[i] *= s;
  }

  cout << "The scalar multiple is (" << v[0] << ", " << v[1] << ", " << v[2] << ")" << endl;

  return 0;

}
