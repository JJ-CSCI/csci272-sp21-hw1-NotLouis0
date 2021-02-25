// Guard and header as asked for.
#ifndef BINOMIAL_H 
#define BINOMIAL_H

class Binomial 
{
  // Initializations, already private as classes are private by default.
  double coefficient1, coefficient2;
  int power1, power2;
  public:
   // Binomial constructor as asked for.
  Binomial(double coef1 = 1.0, double coef2 = 1.0, int pw1 = 1, int pw2 = 1);
  double GetCoefficient(int index) const; // GetCoeffectient function member initialization.
  int GetPower(int index) const; // GetPower function member initialization.
  int SetPower(int index, int power);
  int Add(const Binomial addition);
  void Multiply(double x);
  void Multiply(double coefficient, int power); // Multiply functions that override each other. 
};

#endif