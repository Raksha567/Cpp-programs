#include<iostream>
using namespace std;
void positiveOrnegative(int num){
	if(num>0){
		cout<<"positive";
	}
	else if(num<0){
		cout<<"Negative";
	}
	else{
		cout<<"niether positive nor negative";
	}
}
int main(){
	int n;
	cout<<"Enter a number:";
	cin>>n;
	positiveOrnegative(n);
}
