#include<iostream>
using namespace std;
class one{
	public:
		int a,b;
	void display(){
		cout<<a<<" "<<b;
	}
};
int main(){
	one obj1;
	obj1.a=2;
	obj1.b=3;
	obj1.display();
}
