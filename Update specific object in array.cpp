#include<iostream>
using namespace std;
class car{
	public:
	int model;
	int price;
	int year;
	void set(){
		cout<<"Enter model:";
		cin>>model;
		cout<<"Enter price:";
		cin>>price;
		cout<<"Enter year";
		cin>>year;
	}
	void display(){
		cout<<model<<" "<<price<<" "<<year<<endl;
	}
};
int main(){
	car ob[2];int i,m,found=0;
	for( i=0;i<2;i++){
		ob[i].set();
	}
	cout<<"Enter model number:";
	cin>>m;
	for( i=0;i<2;i++){
		if(ob[i].model==m){
			found=1;
			break;
		}
	}
	if(found==1){
		cout<<"Update price:";
		cin>>ob[i].price;
		ob[i].display();
	}
	else{
		cout<<"Not found";
	}
}
