#include<iostream>
using namespace std;

class Parent{
	public:
		string name;
		int age;
		
		Parent(string name, int age){
			this -> name = name;
			this -> age = age;
			
		}
		
};

class Child : public Parent{
	public:
		Child(string name , int age) : Parent(name,age){
			cout<<"child class constructor called"<<endl;
			
		}
		void display(){
			cout<<"name of person is:"<<name<<"age is:"<<age<<endl;
			
		}
};

int main(){
	Child ch("Ajay" , 12)
	ch.display();
	return 0;
}
