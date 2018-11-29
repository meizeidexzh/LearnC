#include <iostream>
#include <cstdlib>
#include <string>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;



int main(){
	vector<int> src;
	src.push_back(0); src.push_back(1);
	int i=0, k=5, size = src.size();
	while(i <= k){
		if(i == size-1){
			int j;
			for(j=0; j<size; j++) src.push_back(1+src[j]);
			size = src.size();
		};
		cout << src[i] << " ";	
		i ++;
	}
	return 0;
}
