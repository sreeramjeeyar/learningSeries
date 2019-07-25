#include<iostream>
using namespace std;

class A
{
     int a;
public:
    A( int a):a(a){};
    int value(){return a;}
};

int operator + (A&lhs,A&rhs) //operator overload (+)
{ 
    return lhs.value() + rhs.value();
}
int main(int args,char **argc){

  A a(5); A b(10); //objects of class A 
  cout<<"add em up"<<a+b<<endl;
  return 0;
  
}