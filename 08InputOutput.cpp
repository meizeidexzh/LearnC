#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void test1(){
	//����������dec�� otc�� hex 
	int a = 10, b = 30;
	cout << a << " " << b << endl;
	cout << hex << a <<" " << b << endl;
	cout << dec << a << " " << b << endl;
	cout << oct << a << " " << b << endl;
}

void test2(){
	//����������setprecision, precision
	double x = 1234567.89, y = 12.34567;
	int n = 1234567; int m = 12;
	cout << setprecision(3) << x << endl; 
	cout << n << endl;//ֻ����һ�� 
	cout << fixed << setprecision(6) << x << " " << m << endl; //ֻҪ��С�����С����������λ  
	cout << setiosflags(ios::fixed) << x << resetiosflags(ios::fixed) << " " << x << endl;//ȡ��������� 
}


void test3(){
	int w = 4;
	char string[10];
	cin.width(5); //����������Ϊ4 
	while(cin >> string){
		//����������Ϊ5 
		cout.width(w++); cout << string << endl; cin.width(5);
	}
} 

void test4(){
	cout << fixed << setprecision(6) << endl; //���Կ�������fixed, setprecision����һֱ�� 
	cout << 12.1 << endl;
} 

void test5(){
	double x = 1234567.89, y = 12.34567;
	cout << scientific << setprecision(6) << x << " " << y <<endl;
} 

int main(){
	test5();
	
	return 0;
}
