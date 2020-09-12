#include<iostream>
using namespace std;

class Parent{
	private:
		int x = 5;
	protected:
	    int y = 10;
    public:
	    int z = 15;
					
};
class Child : public Parent {
	public:
		string name = "hello";
		
};

int main(){
	Child c;
	c.z = 20;
	cout<<"the value of z is:"<<c.z<<endl;
	return 0;
}
