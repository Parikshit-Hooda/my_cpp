#include <iostream>
#include <string>
using namespace std;

class Base{
	string msg="base; ";
	public:
	virtual void disp(){ cout << this->msg << "\n";}
};

class Derived: public Base {
	string msg = "derived; ";
	public:
	void disp(){ cout <<this->msg << "\n";}
};

void printDisp(Base *o){
	o->disp();
}



int main() {
	// your code goes here
	Base *o1 = new Base();
	Derived *o2 = new Derived();
	printDisp(o1);
	printDisp(o2);
	return 0;
}
