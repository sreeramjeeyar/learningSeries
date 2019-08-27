#include<iostream>
using namespace std;
//simple class
class class1{
int i;
public:
void setvalue(int value);
 int getvalue();
};
void class1::setvalue(int value)
{
  i=value;
}
int class1::getvalue()
{
  return i;
}

int main(int args,char **argv)
{
  int i=40;
  class1 obj1; //object created
  obj1.setvalue(i);
  cout<<"value is"<<obj1.getvalue()<<endl;
  return 0;




}