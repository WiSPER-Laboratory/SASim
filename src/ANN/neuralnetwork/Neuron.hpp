#ifndef _NEURON_HPP_
#define _NEURON_HPP_

#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

class Neuron
{
public:
  Neuron(double val);
  // Fast Sigmoid Function
  // f(x) = x / (1 + |x|)
  void setVal(double v);
  void activate();
  // Derivative of Fast Sigmoid Function
  // f'(x) = f(x) * (1 - f(x))

  void derive();
  //Getter
  double getVal(){return this->val;}
  double getActivatedVal(){return this->activatedVal;}
  double getDerivedVal(){return this->derivedVal;}
private:
  // input real number
  double val;
  // non-linear range [0,1]
  double activatedVal;
  double derivedVal;
};

#endif

