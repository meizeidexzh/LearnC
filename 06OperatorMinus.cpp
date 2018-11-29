#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

ostream &tab(ostream &output){
	return output << '\t';
}


int main(){
	cout << "aa\n" << "\t" << "bb";
	return 0;
}
