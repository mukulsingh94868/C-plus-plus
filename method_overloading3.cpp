#include<iostream>
using namespace std;
class Marks{
	public:
		int science;
		int maths;
		Marks(){
			science = 0;
			maths = 0;
		}
		Marks(int science , int maths){
			this -> science = science;
			this -> maths = maths;
		}
		void display(Marks m){
			cout<<"marks obtained:"<<endl<<"science:"<<m.science<<endl<<"maths:"<<m.maths<<endl;
		}
		Marks operator +(Marks m){
			Marks temp;
			temp.science = science + m.science;
			temp.maths = maths + m.maths;
			return temp;
		}
};

int main(){
	Marks m1(10,20);
	Marks m2(20,30);
	Marks m3 = m1 + m2;
	m3.display(m3);
	return 0;
}

