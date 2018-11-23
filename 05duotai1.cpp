#include <iostream>
#include <cstdlib>
using namespace std;

class Base{
	public:
		int i;
		virtual void Print(){
			cout << "Base: Print" << endl;
		}
};

class Derived: public Base{
	public:
		int n;
		virtual void Print(){
			cout << "Derived: Print" << endl;
		}
};

int main(){
	Derived d;
	cout << sizeof(Base) << "," << sizeof(Derived) << endl;
	
	return 0;
}
