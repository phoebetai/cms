#include <iostream>

using namespace std;

int main() {

  double i = 1;

  while (i < 1.5e9) {
    i *= 10;
  }

  cout << "The final value of 'i' was: " << i << endl;

  return 0;

}
