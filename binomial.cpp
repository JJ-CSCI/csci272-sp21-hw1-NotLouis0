#include "binomial.h"

Binomial::Binomial(double coef1, double coef2, int pw1, int pw2)
{
  // Defining corresponding members.
  coefficient1 = coef1;
  coefficient2 = coef2;
  power1 = pw1;
  power2 = pw2;
  // If statements fulfills "Binomial power is always positive."
  if(pw1 && pw2 < 1)
  {
    pw1 = 1;
    pw2 = 1;
  }
}

double Binomial::GetCoefficient(int index) const
{
  // Function returns floating value of the corresponding term coefficient
  if (index == 1)
    return coefficient1;
  else if(index == 2)
    return coefficient2;
  else
    return -1;
}

int Binomial::GetPower(int index) const
{
// Function returns integer value with the corresponding term exponent.
  if(index == 1)
    return power1;
  else if(index == 2)
    return power2;
  else
    return -1;
}

int Binomial::SetPower(int index, int power)
{
  if (power <= 0)
    power = 1;
  if(index == 1)
    power1 = power;
  else if(index == 2)
    power2 = power;
  else
    return -1;
  return 0;
}

// Math functions

int Binomial::Add(const Binomial addition)
{
  if((addition.GetPower(1) == power1) && (addition.GetPower(2) == power2))
  {
    coefficient1 += addition.GetCoefficient(1);
    coefficient2 += addition.GetCoefficient(2);
    return 0;
  }

  else if((addition.GetPower(2) == power1) && (addition.GetPower(1) == power2))
  {
    coefficient1 += addition.GetCoefficient(2);
    coefficient2 += addition.GetCoefficient(1);
    return 0;
  } 
  else
    return -1;
}

void Binomial::Multiply(double x)
{
  coefficient1 *= x;
  coefficient2 *= x;
}

void Binomial::Multiply(double coefficient, int power)
{
  coefficient1 *= coefficient;
  coefficient2 *= coefficient;
  power1 += power;
  power2 += power;
}