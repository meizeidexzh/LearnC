#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;

const int KeyLen = 11;
const int MaxD = 5;
typedef int Index;
typedef char ElementType[KeyLen+1];
struct ListNode{
	ElementType data;
	int times;
	struct ListNode* next;
};
typedef struct ListNode* List;
typedef List Position;


struct TblNode{
	int tablesize;
	List heads;
};
typedef struct TblNode* HashTable;

int NextPrime(int N){
	int i, p = N%2? N+2:N+1;
	while(true){
		for(i=(int)sqrt(p); i>2; i--)
			if(p%i == 0) break;
		if(i == 2) break;
		p += 2;
	}
	return p;
}

HashTable CreateTable(int N){
	HashTable H = (HashTable)malloc(sizeof(struct TblNode));
	H->tablesize = NextPrime(N);
	H->heads = (List)malloc(sizeof(struct ListNode)*H->tablesize);
	int i;
	for(i=0; i<H->tablesize; i++){
		H->heads[i].next = NULL; H->heads[i].data[0] = 0;
	}
	return H;
}

int Hash(ElementType Key, int tablesize){
	return atoi(Key+KeyLen-MaxD)%tablesize;
}

Position Find(HashTable H, ElementType key){
	Index p; Position pos;
	p = Hash(key, H->tablesize);
	pos = H->heads[p].next;
	while(pos && strcmp(pos->data, key)) pos = pos->next;
	return pos; 
}

void Insert(HashTable H, ElementType key){
	Position pos = Find(H, key);
	if(!pos){
		int p = Hash(key, H->tablesize);
		Position newcell = (Position)malloc(sizeof(struct ListNode));
		strcpy(newcell->data, key);
		newcell->times = 1;
		newcell->next = H->heads[p].next; H->heads[p].next = newcell;
	}
	else pos->times += 1;
}

void PrintTable(HashTable H){
	int i; Position pos;
	for(i=0; i<H->tablesize; i++){
		pos = H->heads[i].next;
		while(pos){
			cout << pos->data << " " << pos->times << endl;
			pos = pos->next;
		}
	}
}

int main(){
	char* s[] = {"13005711862", "13588625832", "13505711862", "13088625832", "13588625832", "18087925832",
	"15005713862", "13588625832"}; int n = 8;
	HashTable H = CreateTable(n);
	int i;
	for(i=0; i<n; i++) Insert(H, s[i]);
	PrintTable(H);
	
	return 0;
}
