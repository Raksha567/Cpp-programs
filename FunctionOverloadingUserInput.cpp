#include<iostream>
using namespace std;
int sum(int x,int y){
	
	return(x+y);
}
int sum(int a,int b,int c){
	
	return(a+b+c);
}
int main(){
	int a,b,c;
	cout<<"Enter value of a:";
	cin>>a;
	cout<<"enter value of b:";
	cin>>b;
	cout<<"Enter value of c:";
	cin>>c;
	int result=sum(a,b,c);
	cout<<result<<endl;
	int x,y;
	cout<<"Enter value of x:";
	cin>>x;
	cout<<"Enter value of y:";
	cin>>y;
	int result2=sum(x,y);
	cout<<result2;
	
}
