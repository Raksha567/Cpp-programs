#include<iostream>
using namespace std;
class one{
	public:
	int a[3];
	void set();
	void dis();
		
		
};
void one:: set(){
			cout<<"Enter elements:";
			for(int i=0;i<3;i++){
				cin>>a[i];
			}
		}
		void one::dis(){
			for(int i=0;i<3;i++){
				cout<<a[i];
			}
		}
int main(){
	one o;
	o.set();
	o.dis();
}
