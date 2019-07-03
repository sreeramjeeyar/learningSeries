#include<iostream>
using namespace std;

int & f(int & i){
    puts("this is fun()");
    return ++i;
}
int main(int argc,char**argv)
{
   int x=5;
  int y=10;
  x+=y;
  printf("x - is %d\n",f(x)-=5);
  printf("x  + is %d\n", f(x)+=5);
 printf("x  div is %d\n", f(x)/=2);
  return 0;
 


}