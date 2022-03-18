/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>
long factorial(int x);
long nCr(int n, int r);

using namespace std;



int main() 
{
  int n, r;
  
  cout << "Enter a value for n :";
  cin >> n;
  
  cout << "Enter a value for r :";
  cin >> r;
  
  cout << "nCr = ";
  cout << nCr(n,r);
  cout << endl;
  
  return 0;
}


long factorial(int x)
{
  int i,fact=1;

  for(i=x ; i>0 ; i-- )
    {
      fact=fact*i;

    }

  return fact;
}

long nCr(int n, int r)
{
  int x,y,z;

  x=factorial(n);
  y=factorial(r);
  z=factorial((n-r));

    return x/(y*z);
}