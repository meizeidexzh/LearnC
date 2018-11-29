#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

struct Student{
	char name[20];
	int score;
};

int main(){
	Student s;
	ifstream inFile("students.dat", ios::in | ios::binary);
	if(!inFile){
		cout << "error" << endl;
		return 0;
	}
	while(inFile.read((char*)&s, sizeof(s))){
		cout << s.name << " " << s.score << endl;
	}
	inFile.close();
	return 0;
}
