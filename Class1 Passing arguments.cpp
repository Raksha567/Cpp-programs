#include<iostream>
using namespace std;
class one{
	int a,b;
	public:
		void set(int x,int y){
			a=x;
			b=y;
		}
		void display(){
			cout<<a<<" "<<b;
		}
};
int main(){
	one obj1;
	obj1.set(2,4);
	obj1.display();
	
}
