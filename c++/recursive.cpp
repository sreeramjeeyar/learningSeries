//recursive-factorial
#include<iostream>
using namespace std;


unsigned long int factorial (unsigned long int n)
{
  if(n<2) return 1;
  return factorial(n-1)*n; 
}

 int main(int argc,char **argv)
 {
   unsigned long int n=10;
   cout<<"number is"<<"n"<<factorial(n)<<endl;

 }