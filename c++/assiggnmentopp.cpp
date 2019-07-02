#include<iostream>
using namespace std;


struct s{

    int i;
    int j;
    int k;

};

   int main(int argc,char **argv)
{
    struct s s1={1,2,3}; //this one is initializing
    struct s s2,s3;
    s3=s2=s1; //this one is assigning
    printf("s1: i is %d, j is %d,k is %d\n",s1.i,s1.j,s1.k);
    printf("s2: i is %d, j is %d,k is %d\n",s2.i,s2.j,s2.k);
    printf("s3: i is %d, j is %d,k is %d\n",s3.i,s3.j,s3.k);
    return 0;
  
}