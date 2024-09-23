#include<iostream>
using namespace std;
class one{
	
		int a,b;
		public:
		void set(){
		
		cout<<"enter value of a and b:";
		cin>>a>>b;}
		void display(){
			cout<<a<<" "<<b;
			
		}
};
int main(){
	one obj1;
	obj1.set();
	obj1.display();
}
