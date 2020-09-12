#include<iostream>
using namespace std;
class Parent{
	public:
		Parent(){
			cout<<"parent class constructor"<<endl;
		}
		~ Parent(){
			cout<<"parent class destructor"<<endl;
		}
};

class Child : public Parent {
	public:
		Child(){
			cout<<"child class constructor"<<endl;
		}
		~ Child(){
			cout<<"child class destructor"<<endl;
		}
};

int main(){
	Parent *c = new Child();
	delete c;
	return 0;
}
