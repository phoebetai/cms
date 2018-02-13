#include <iostream>
#include <fstream>

using namespace std;

int main() {

  ofstream myfile;
  myfile.open("example.txt");
  myfile << "helllooOOOOooo";
  myfile.close();

  return 0;

}
