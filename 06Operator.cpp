#include <iostream>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;

class Complex{
	private:
		int real, imag;
	public:
		bool operator < (const Complex &a){
			return real < a.real;
		}
		void set(int r, int i){
			real = r; imag = i;
		}
		void print(){
			cout << real << " " << imag << endl;
		}
};

Complex numbers[10];



int main(){
	int arr[] = {9,9, 8,8, 7,7, 6,6, 5,5}, n=10, i, size=0;
	for(i=0; i<n; i += 2){
		numbers[size++].set(arr[i], arr[i+1]);
	}
	sort(numbers, numbers+size);
	for(i=0; i<size; i++) numbers[i].print();
	
	return 0;
}
