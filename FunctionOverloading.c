#include<iostream>
using namespace std;
int sum(int a,int b){
	return (a+b);
}
int sum(int a,int b, int c){
	return(a+b+c);
}
int main(){
	int res=sum(2,3);
	cout<<res;
}
