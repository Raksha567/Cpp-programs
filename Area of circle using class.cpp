#include<iostream>
using namespace std;
const float pi=3.14;
class Circle{
	float r,res;
	public:
		void set(){
			cout<<"Enter radius:";
			cin>>r;
		}
		void cal(){
			res=pi*r*r;
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
