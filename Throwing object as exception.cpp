#include<iostream>
using namespace std;
class MyException{
	string expText;
	public:
		MyException(string text){
			expText=text;
		}
		string what(){
			return expText;
		}
};
int main()
{
	int a;
	cin>>a;
	try{
		if(a<0)
		throw MyException("Negative");
		cout<<a<<endl;
	}
	catch(MyException e){
		cout<<e.what()<<endl;
	}
	return 0;
}
