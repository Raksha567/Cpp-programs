#include<iostream>
using namespace std;
class one{
	public:
		int a,b;
		void set(int x,int y){
			a=x;
			b=y;
		}
		void add (one cob2){
			int c=a+cob2.a;
			int d=b+cob2.b;
			cout<<c<<" "<<d;
		}
};
int main(){
	one ob1,ob2;
	ob1.set(2,3);
	ob2.set(3,4);
	ob1.add(ob2);
}
