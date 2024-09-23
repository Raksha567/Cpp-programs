#include<iostream>
using namespace std;
class AreaOfRect{
	int l,b,result;
	public:
	void set(){
		cout<<"Enter value of l and b:";
		cin>>l>>b;
	}
	void res(){
		result=l*b;
	}
	void dis(){
		cout<<result;
	}
};
int main(){
	AreaOfRect obj;
	obj.set();
	obj.res();
	obj.dis();
}
