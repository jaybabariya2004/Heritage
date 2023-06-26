#include<iostream>

using namespace std;

class employee1{
	
	public:
		void skill1(){
			
			cout<<"Project maneger"<<endl;
		}
};
class employee2{
	
	public:
		void skill2(){
			
			cout<<"Maneger"<<endl;
		}
};
class All_employee : public employee1, public employee2{
	
	public:
		void skill3(){
			
			cout<<"Casiyer"<<endl;
		}
};
int main(){
	
	All_employee obj;
	
	obj.skill1();
	obj.skill2();
	obj.skill3();
}
