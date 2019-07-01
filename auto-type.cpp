
#include <iostream>
#include<typeinfo>
using namespace std;
string func(){
	return "string";
}

int main( int argc, char ** argv ) {
    auto x=func();
	cout<<x<<endl;
	cout << typeid(x).name() << endl;
	return 0;
}
