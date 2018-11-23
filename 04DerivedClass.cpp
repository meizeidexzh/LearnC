#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

class CShape{
	public:
		virtual double Area() = 0;
		virtual void PrintInfo() = 0;
};

class CRectangle:public CShape{
	public:
		int w, h;
		virtual double Area();
		virtual void PrintInfo();
};

class CCircle: public CShape{
	public:
		int r;
		virtual double Area();
		virtual void PrintInfo();
};

class CTriangle: public CShape{
	public:
		int a, b, c;
		virtual double Area();
		virtual void PrintInfo();
};

double CRectangle :: Area(){
	return w*h;
}

void CRectangle :: PrintInfo(){
	cout << "Rectangle: " << Area() << endl;
}

double CCircle :: Area(){
	return 3.14*r*r;
}

void CCircle :: PrintInfo(){
	cout << "Circle: " << Area() << endl;
}

double CTriangle :: Area(){
	double p = (a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}

void CTriangle :: PrintInfo(){
	cout << "Triangle: " << Area() << endl;
}

CShape* pShapes[100];
int MyCompare(const void* s1, const void* s2);

int main(){
	int i, n; cin >> n;
	CRectangle* pr; CCircle* pc; CTriangle* pt;
	for(i=0; i<n; i++){
		char c; cin >> c;
		switch(c){
			case 'R':
				pr = new CRectangle();
				cin >> pr->w >> pr->h;
				pShapes[i] = pr;
				break;
				
			case 'C':
				pc = new CCircle();
				cin >> pc->r;
				pShapes[i] = pc;
				break;
				
			case 'T':
				pt = new CTriangle();
				cin >> pt->a >> pt->b >> pt->c;
				pShapes[i] = pt;
				break;
		}
	}
	qsort(pShapes, n, sizeof(CShape*), MyCompare);
	for(i=0; i<n; i++) pShapes[i]->PrintInfo();
	return 0;
}

int MyCompare(const void* s1, const void* s2){
	double a1, a2;
	CShape** p1; CShape** p2;
	p1 = (CShape**)s1; p2 = (CShape**)s2;
	a1 = (*p1)->Area(); a2 = (*p2)->Area();
	if(a1<a2) return -1;
	else if(a2<a1) return 1;
	else return 0;
}
