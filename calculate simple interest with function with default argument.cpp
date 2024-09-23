#include<iostream>
using namespace std;
void fun(float p,float t,float r=7){
	float SI=(p*r*t)/100;
	cout<<"SI is"<<" "<<SI<<endl;
}
int main(){
	float p,r,t;
	fun(1000,2,8);
	fun(1000,3);
	
	
}
