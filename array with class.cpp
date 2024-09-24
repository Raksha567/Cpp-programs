#include<iostream>
using namespace std;
class one{
	int a[3];
	public:
		void set(){
			cout<<"Enter elements:";
			for(int i=0;i<3;i++){
				cin>>a[i];
			}
		}
		void dis(){
			for(int i=0;i<3;i++){
				cout<<a[i];
			}
		}
};
int main(){
	one o;
	o.set();
	o.dis();
}
