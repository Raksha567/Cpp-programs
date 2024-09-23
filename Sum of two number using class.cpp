#include<iostream>
using namespace std;
class Sum{
	int a,b,res;
	public:
		void set(){
		cout<<"Enter a and b:"	;
		cin>>a>>b;
		}
		void cal(){
			res=a+b;
		}
		void disres(){
			cout<<res;
		}
};
int main(){
	Sum obj;
	obj.set();
	obj.cal();
	obj.disres();
}
