#include<iostream>
using namespace std;

class Parent{
	public:
		void getProperty()
		{
			cout<<"getting land,getting gold"<<endl;
			
		}
		 virtual void getLifePartner(){
			cout<<"abc"<<endl;
			
		}
};
class Child : public Parent{
	public:
	void getLifePartner(){
		cout<<"def"<<endl;
	}
};
int main(){
    Parent *ch = new Child();
    ch -> getProperty();
    ch -> getLifePartner();
	return 0;
	}
