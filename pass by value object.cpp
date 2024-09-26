#include<iostream>
using namespace std;
class one{
	public:
		int a,b;
		void set(int x,int y){
			a=x;
			b=y;
		}
		void add(one cob1){
			cob1.a=18;
			cob1.b=20;
		}
		void dis(){
			cout<<a<<" "<<b;
		}
};
int main(){
	one ob1;
	ob1.set(4,8);
	ob1.dis();
	ob1.add(ob1);
	ob1.dis();
}
