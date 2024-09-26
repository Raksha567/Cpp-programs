#include<iostream>
using namespace std;
class one{
	public:
		int a,b;
		void set(int x,int y){
			a=x;
			b=y;
		}
		one add(one cob2){
			one tob;
			tob.a=a+cob2.a;
			tob.b=b+cob2.b;
			return tob;
				}
		void dis(){
			cout<<a<<" "<<b<<endl;
		}
};
int main(){
	one ob1,ob2,ob3;
	ob1.set(4,8);
	ob2.set(2,3);
	ob3=ob1.add(ob2);
	ob3.dis();
}
