#include<iostream>
using namespace std;
class one{
	public:
		int a,b;
	one(){
		a=2;
		b=4;
	}
	void dis(){
		cout<<a<<" "<<b<<endl;
	}
};
int main(){
	one ob1,ob2,ob3;
	ob1.dis();
	ob2.dis();
	ob2.dis();
}
