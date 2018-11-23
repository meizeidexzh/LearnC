#include <iostream>
#include <cstdlib>
using namespace std;

//常量对象与常量成员函数 
class CTest{
	private:
		int n;
	public:
		CTest(){
			n = 1;
		}
		int GetValue() const { return n;}
		int GetValue(){
			return 2*n;
		}
};

class Test{
	private:
		mutable int m_n1;
	public:
		Test(){
			m_n1 = 2;
		}
		int GetData() const{
			m_n1 ++;
			return m_n1;
		}
};

int main(){
	const Test obj;
	cout << obj.GetData() << endl;
	
	return 0;
}
