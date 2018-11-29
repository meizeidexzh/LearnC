#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

void test(){
	char data[100];
	
	ofstream outfile; outfile.open("test.txt");
	outfile << "xzh ni hao li hai ya" << endl;
}

void test1(){
	char data[100];
	
	ofstream outfile; outfile.open("test.txt");
	
	cout << "Writing to the file" << endl;
	cout << "Enter your name: " ;
	cin.getline(data, 100);
	
	outfile << data << endl;
	
	cout << "Enter your age"; cin >> data; cin.ignore();
	
	outfile << data << endl;
	
	outfile.close();
	
	ifstream infile; infile.open("test.txt");
	infile >> data;
	cout << data << endl;
}

void test2(){
	//将in.txt中的数组排序后， 写入到out.txt 
	vector<int> v;
	ifstream srcFile("in.txt", ios::in);
	ofstream destFile("out.txt", ios::out);
	int x;
	while(srcFile >> x) v.push_back(x);
	sort(v.begin(), v.end());
	for(int i=0; i<v.size(); i++) destFile << v[i] << " ";
	destFile.close();
	srcFile.close();
}




int main(){
	test2();
	
	return 0;
}
