#include<iostream>
using namespace std;
class Demo{
	public:
		void sum(int a , int b){
			cout<<"the sum is:"<<a+b<<endl;
		}
		void sum(float a , float b){
			cout<<"the sum is:"<<a+b<<endl;
		}
		
};
int main(){
	Demo d;
	d.sum(12.3f,13.2f);
	return 0;
}
