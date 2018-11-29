#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void test1(){
	//流操纵算子dec， otc， hex 
	int a = 10, b = 30;
	cout << a << " " << b << endl;
	cout << hex << a <<" " << b << endl;
	cout << dec << a << " " << b << endl;
	cout << oct << a << " " << b << endl;
}

void test2(){
	//流操纵算子setprecision, precision
	double x = 1234567.89, y = 12.34567;
	int n = 1234567; int m = 12;
	cout << setprecision(3) << x << endl; 
	cout << n << endl;//只管那一次 
	cout << fixed << setprecision(6) << x << " " << m << endl; //只要有小数点就小数点后输出六位  
	cout << setiosflags(ios::fixed) << x << resetiosflags(ios::fixed) << " " << x << endl;//取消顶点输出 
}


void test3(){
	int w = 4;
	char string[10];
	cin.width(5); //设置输入宽度为4 
	while(cin >> string){
		//设置输出宽度为5 
		cout.width(w++); cout << string << endl; cin.width(5);
	}
} 

void test4(){
	cout << fixed << setprecision(6) << endl; //可以看出来，fixed, setprecision后面一直管 
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
