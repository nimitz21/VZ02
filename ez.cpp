#include <iostream>
#include "realAnimals/bat.h"
#define tes(X,A) 								\
{												\
	if(A.id == "BT"){							\
		return ((Bat *)(A.c))->X();				\
	}											\
	else if(A.id == "BT"){						\
		return ((Bat *)(A.c))->X();				\
	}											\
}

	else if(A.id == "BT"){						\
		return ((Bat *)(A.c))->X();				\
	}											\
class test {
public:
	string id;
	void * c;
};

pair<int,int> GetPos(test& a){
	tes(GetPos,a)
}

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