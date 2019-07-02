#include<iostream>
using namespace std;

int main(int argc,char **argv)
{
int i1[]={1,2,3,4,5,0}; //here these elements are 4bits apart
int *ip=i1;

printf("%d ",*ip++);

printf("%d ",*ip++);

printf("%d ",*ip++); //it increments by size of the object it points to so it knows.
return 0;
}