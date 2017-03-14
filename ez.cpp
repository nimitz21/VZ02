#include <iostream>
#include "realAnimals/bat.h"
#include "utility.h"

class test {
public:
	string id;
	void * c;
};

pair<int,int> GetPos(test& a){
	MakroGetter(GetPos,a)
}

void SetPos()

using namespace std;
int main() {
	Bat a(make_pair(0,0));
	void * c;
	Bat* b;
	b = &a;
	c = (Bat*) b;	
	((Bat*)c)->Interact();

	test aa;
	string idmasuk = "BT";
	aa.id = idmasuk;

	cout << GetPos(aa).first << endl;

	return 0;
}