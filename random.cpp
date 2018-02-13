#include <iostream>
#include <math.h>

using namespace std;

const int a = 7141;
const int c = 54773;
const int mmod = 256200;

double getFlatRandom(int &inew) {
  double mranflat = 0.;
  inew = inew % mmod;
  double aa = double(inew) / double(mmod);
  mranflat = aa;
  inew = a * inew + c;
  return mranflat;
}

int main() {

  int num;
  cout << "Enter the number of loop iterations: ";
  cin >> num;

  int inew = 2345;
  int histo[10] = {};
  double atmp;

  for (int i = 0; i < num; i++) {
    atmp = getFlatRandom(inew);
    histo[int(atmp * 10)]++;
  }

  for (int i = 0; i < num; i++) {
    cout << i << ": ";
    for (int j = 0; j < int((double(100 * histo[i]) / double(num)) + 0.5); j++) {
      cout << "=";
    }
    cout << endl;
  }

  return 0;

}
