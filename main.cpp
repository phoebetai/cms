#include <iostream>
#include <fstream>

#include "dotprod.cpp"
#include "scalarmult.cpp"

using namespace std;

int main() {

  double vector1[3];
  double vector2[3];
  double scalar;

  ifstream infile;
  infile.open("vectors.txt");

  infile >> vector1[0] >> vector1[1] >> vector1[2];
  cout << "Vector 1 is (" << vector1[0] << ", " << vector1[1] << ", " << vector1[2] << ")" << endl;

  infile >> vector2[0] >> vector2[1] >> vector2[2];
  cout << "Vector 2 is (" << vector2[0] << ", " << vector2[1] << ", " << vector2[2] << ")" << endl;

  infile >> scalar;
  cout << "The scalar is " << scalar << endl;

  infile.close();

  dot_prod(vector1, vector2);
  scalar_mult(vector1, scalar);
  scalar_mult(vector2, scalar);

  return 0;

}
