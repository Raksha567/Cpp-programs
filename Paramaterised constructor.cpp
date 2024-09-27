#include<iostream>
using namespace std;
class one{
	public:
		int a,b;
	one(int x,int y){
	a=x;
	b=y;
	}
	void dis(){
		cout<<a<<" "<<b<<endl;
	}
};
int main(){
	one ob1(23,4);
	one ob2=one(43,8);
	ob1.dis();
	ob2.dis();
}
