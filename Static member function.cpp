#include<iostream>
using namespace std;
		static int a;	
class one{
	public:

	static void set(){
		a++;
	}
	void dis(){
		cout<<a<<endl;
	}
};
int main(){
	one ob1,ob2,ob3;
	ob1.dis();
	ob2.dis();
	ob3.dis();
	
	one::set();
	ob1.dis();
	ob2.dis();
	ob3.dis();
}
