#include <iostream>
using namespace std;

class A{
	private:
		int **p;
	
	public:
	
	A();
	void createMatrix(int m, int n) {
		
		p = new int*[m];
		
		for(int i = 0; i < m; i++) {
			p[i] = new int[n]{5,6,7,8,9};
		}
		
		return ;
	}
	~A();
	
};

A :: A(){
	cout <<"hi there;";
}

A::~A() {
	
	cout <<"init destructior \n";
	// for(int i = 0; i < 4; i++) {
		// delete p[i];
		delete []p;
	// }
	cout <<"destructor finished \n";
}

int main() {
	// your code goes here
	A a;
	a.createMatrix(4,5);
	return 0;
}
