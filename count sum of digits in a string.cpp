#include<iostream>
using namespace std;
int main(){
	char str[100];int sum=0;
	cout<<"enter string:";
	cin>>str;
	for(int i=0;str[i]!='\0';i++){
		if(str[i]>='0'&&str[i]<='9'){
			sum=sum+(str[i]-'0');
		}
	}
	cout<<sum;
}
