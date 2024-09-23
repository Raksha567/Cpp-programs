#include<iostream>
using namespace std;
void reverse(char *str,int n){
	if(n<0){
		return;
	}
	cout<<str[n];
	reverse(str,n-1);
	
}
int main(){
	char str[10];int l=0;
	cout<<"Enter a string:";
	cin>>str;
	for(int i=0;str[i]!='\0';i++){
	 l++;
	}
	cout<<l;
	reverse(str,l-1);
	
}

