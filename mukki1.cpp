#include<iostream>
using namespace std;

int main(){
	int num;
	int sum = 0;
	int temp;
	int digit;
	cout<<"enter the value:"<<endl;
	cin>>num;
	
	temp = num;
	while(temp > 0){
		digit = temp % 10;
		sum = sum + digit * digit * digit;
		temp = temp / 10;
	}
	if (num == sum){
		cout<<"armstrong number"<<endl;
	}
	else{
		cout<<"not armstrong number";
	}
}
