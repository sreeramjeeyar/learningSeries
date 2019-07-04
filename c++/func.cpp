
#include <iostream>
using namespace std;

float f(float i)
{
   return i;

}
int main( int argc, char ** argv ) {
	float i;
    i=45.87;
    float (*pfun) (float); //declaring function pointer
    pfun=&f; //assigning it to address of func
    printf("f is %f",f(i));
	return 0;
}
