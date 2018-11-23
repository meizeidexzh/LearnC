#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstring>
using namespace std;

int climbStairs(int n) {
    int a = 1, b = 2, res; int k=3;
    if(n == 1) return a;
    else if(n == 2) return b;
    for(k=3; k<=n; k++){
    	res = a + b; a = b; b = res;
	}
	return res;
}


int main(){
	cout << climbStairs(4) << endl; 
	return 0;
}




