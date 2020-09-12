#include<iostream>
using namespace std;

class Parent{
	public:
		void sayHello(){
			cout<<"hello from parents"<<endl;
		}
};
class Child : public Parent{
	public:
		void sayHello(){
			cout<<"hello from child"<<endl;
		}
}; 

int main(){
	Child ch;
	ch.sayHello();
	return 0;
}
