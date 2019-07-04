#include <iostream>
using namespace std;

struct S
{
    float a;
    int b;
    int c;

};

int main( int argc, char ** argv ) {
	struct S s={55.023,10,15};
    struct S *sp=&s;

    printf("the struct is a:%d b:%d c:%d\n",s.a,s.b,s.c);  //membership operator . 
    printf("the struct is a:%f b:%d c:%d\n",sp->a,sp->b,sp->c); //dereference operator used ->
	return 0;
}
