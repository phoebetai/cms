#include <iostream>

using namespace std;

int main() {

  double *p1 = new double(3.14);
  double *p2 = p1;

  cout << "p1 points at address " << p1 << "\n";
  cout << "p2 points at address " << p2 << "\n";

  cout << "The data stored in address " << p1 << " is " << *p1 << "\n";
  cout << "The data stored in address " << p2 << " is " << *p2 << "\n";

  *p1 *= 2;

  cout << "The data stored in address " << p1 << " is " << *p1 << "\n";
  cout << "The data stored in address " << p2 << " is " << *p2 << "\n";

  return 0;

}
