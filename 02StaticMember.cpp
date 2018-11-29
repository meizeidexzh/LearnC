#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

class CRectangle{
	private:
		int w, h;
		static int TotalArea;
		static int TotalNumber;
	public:
		CRectangle(int w_, int h_);
		~CRectangle();
		static void PrintTotal();
		CRectangle(CRectangle & r){
			w =r.w; h = r.h;
			TotalNumber ++;
			TotalArea += w*h;
		}
};

CRectangle :: CRectangle(int w_, int h_){
	w = w_; h = h_;
	TotalNumber ++;
	TotalArea += w*h;
}

CRectangle :: ~CRectangle(){
	TotalNumber --; TotalArea -= w*h;
}

void CRectangle :: PrintTotal(){
	cout << "TotalNumber: " << TotalNumber << " TotalArea: " << TotalArea << endl;
}

int CRectangle :: TotalNumber = 0;
int CRectangle :: TotalArea = 0;

int main(){
	CRectangle r1(3,3), r2(2,2);
	CRectangle :: PrintTotal();
	return 0;
}
