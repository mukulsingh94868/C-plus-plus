#include<iostream>
using namespace std;

class Add{
	protected:
		int N1,N2;
    public:
	    void accept(){
	    	cout<<"enter 1 number"<<endl;
	    	cin>>N1;
	    	cout<<"enter 2 number"<<endl;
	    	cin>>N2;
		}		
};

Class Addition : public Add {
    int sum;
    public:
    	void add()
    	{
    		sum = N1 + N2;
		}
		
		void display(){
			cout<<"sum of two number:"<<sum;
		}
};

int main(){
	Addition a;
	a.accept();
	a.add();
	a.display();
	return 0;
}
