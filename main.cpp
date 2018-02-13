#include <iostream>
#include <fstream>

#include "dotprod.cpp"

using namespace std;

int main() {

  double vector1[3];
  double vector2[3];

  ifstream infile;
  infile.open("vectors.txt");

  infile >> vector1[0] >> vector1[1] >> vector1[2];
  cout << "Vector 1 is (" << vector1[0] << ", " << vector1[1] << ", " << vector1[2] << ")" << endl;

  infile >> vector2[0] >> vector2[1] >> vector2[2];
  cout << "Vector 2 is (" << vector2[0] << ", " << vector2[1] << ", " << vector2[2] << ")" << endl;

  infile.close();

  dot_prod(vector1, vector2);

  return 0;

}
