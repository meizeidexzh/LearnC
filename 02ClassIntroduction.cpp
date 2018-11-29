#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

class A{
	public:
		int a, b;
		A(int a_, int b_):a(a_), b(b_){
			cout << "class A constructor called" << endl;
		}
};

class B{
	public:
		int a;
		B(int a_):a(a_){
			cout << "class B constructor called" << endl;
		}
};

class C{
	public:
		int c;
		A a;
		B b;
		C(int a_, int ab_, int b_, int c_):c(c_), b(b_), a(a_, ab_){
			cout << "class C constructor called" << endl;
		}
		void PrintPar(){
			cout << c << " " << a.a << " " << a.b << " " << b.a << endl;
		}
		
};


int main(){
	cout << 166.88 * 8 << endl;
	return 0;
}
