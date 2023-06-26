#include<iostream>

using namespace std;

class mother{
	
	public:
		void display(){
			
			cout<<"Caring Mother"<<endl;
			cout<<"Age = 50"<<endl;
		}
};
class daughter : public mother{
	
	public:
		void display(){
			
			cout<<"Beautiful Daughter"<<endl;
			cout<<"Age = 20"<<endl;
		}
};
int main(){
	
	daughter obj;
	
	obj.mother::display();
	obj.display();
	
	return 0;
}
