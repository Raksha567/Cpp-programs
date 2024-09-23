#include<iostream>
using namespace std;
void primeOrnot(int num){
	int isprime=1;

	for(int i=2;i<num;i++){
		if(num%i==0){
		isprime=0;	
		}
	}
	if(num<=1){
		cout<<"Not prime";
	}
	else if(isprime==0){
		cout<<"Not prime";
	}
	else{
	cout<<"Prime";	
	}
}
int main(){
	int n;
	cout<<"Enter a number:";
	cin>>n;
	primeOrnot(n);
}
