#include<iostream>
using namespace std;
const float pi=3.14;
class Circle{
	int r,res;
	public:
		void set(){
			cout<<"Enter radius:";
			cin>>r;
		}
		void cal(){
			res=2*pi*r;
		}
		void dis(){
			cout<<res;
		}
};
int main(){
	Circle obj;
	obj.set();
	obj.cal();
	obj.dis();
}
