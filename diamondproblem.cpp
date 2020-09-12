#include<iostream>

class Animal{
	public:
		void sayHello(){
		cout<<"say hello mukul"<<endl;
		}
};
class Lion : virtual public Animal{
	
};

class Tiger : virtual public Animal{
	
};

class Monkey : public Lion , public Tiger{
	
};

int main(){
	Monkey m;
	m.sayHello();
	return 0;
}
