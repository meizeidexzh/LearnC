#include <iostream>
#include <cstdlib>
using namespace std;

class CTyre{ //��̥�� 
	private:
		int radius;
		int width;
	public:
		CTyre(int r, int w):radius(r), width(w){
		}
		void PrintTyre(){
			cout << "radius: " << " width: " << width << endl; 
		}
};

class CEngine{//������ 
	
};

class CCar{//������ 
	private:
		int price;
		CTyre tyre;
		CEngine engine;
	public:
		CCar(int p, int tr, int w):price(p), tyre(tr, w){
		}
		void PrintCar(){
			cout << "price: " << price << endl;
			tyre.PrintTyre();
		}
};



int main(){
	CCar car(2000, 17, 225);
	car.PrintCar();
	return 0;
}
