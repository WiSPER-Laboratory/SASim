#include <iostream>
#include "include/Neuron.hpp"
#include "include/Matrix.hpp"
#include "include/Layer.hpp"
#include<vector>
#include <stdlib.h>
using namespace std;

int main(int argc, char **argv) {

  //Neuron *n = new Neuron(1.5);

  //cout << "Val:" << n->getVal() << endl;
  //cout << "Activated Val:" << n->getActivatedVal() << endl;
  //cout << "DerivedVal:" << n->getDerivedVal() << endl;
  Matrix *m = new Matrix(3, 2, true);
  m->printToConsole();
  return 0;
}
