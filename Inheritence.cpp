#include<iostream>
using namespace std;
class polygon{
	protected:
	double side1;
	double side2;
	double side3;
	public:
		virtual void getarea()=0;
		virtual void setdata()=0;
};
class rectangle:public polygon{
	void setdata(){
		cout<<"Enter the length of rectangle:"<<endl;
		cin>>side1;
		cout<<"Enter the breadth of rectangle:"<<endl;
		cin>>side2;
	}
	void getarea(){
	double area;
	area=side1*side2;
		cout<<"The area of rectangle is:"<<area<<endl;
	}
};
class square:public polygon{
	void setdata(){
		cout<<"Enter the length of square:"<<endl;
		cin>>side3;
	
	}
	void getarea(){
		double area;
		area=side3*side3;
		cout<<"The area of square is:"<<area<<endl;
	}
};
int main(){
	rectangle r;
	square s;
	polygon *p1=&r;
	polygon *p2=&s;
	p1->setdata();
	p1->getarea();
	p2->setdata();
	p2->getarea();
	return 0;
}
