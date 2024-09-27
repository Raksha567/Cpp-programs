#include<iostream>
#include<string.h>
using namespace std;
class one{
	public:
	char *name;
	int len;
	one(){
		len=0;
		name=new char [len];
	}
	one(char str[]){
		len=strlen(str);
		name=new char[len+1];
		strcpy(name,str);
	}
	void dis(){
		cout<<name;
	}
	
};
int main(){
	one ob1("Rameshwaram");
	ob1.dis();
}
