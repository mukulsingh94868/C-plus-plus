#include<iostream>
using namespace std;
class Demo{
	public:
		
		static void display(){
			
			cout<<"function called"<<endl;
		}
		
};

int main(){
	Demo :: display();
	return 0;
}
