#include<iostream>
using namespace std;
const float pi=3.14;
class Circle{
	float radius;
	public:
		
		void fun1(int r){
			radius=r;
			float area=pi*radius*radius;
			cout<<area<<endl;
			float circumference=2*pi*r;
			cout<<circumference;
		}
		
	
};
int main(){
	
	Circle c1;
	c1.fun1(7);
	
}
