#include <iostream>
using namespace std;
class Square
{
	public:
		float length;
		float width;
	public:
	Square()
	{
		cout<<"In cons."<<endl;
		length = 30.3;
		width =40.4;
		}
	void calculateArea()
	{
		cout<<"Area="<<length*width<<endl;
		}
};
     int main()
     {
     	Square obj1;
     	
     	Square obj2;
     	
     	Square obj3;
     	
     	Square obj4;
     	
     	Square obj5;
     	obj5.calculateArea();
     	obj1.calculateArea();
     	obj2.calculateArea();
     	obj3.calculateArea();
     	obj4.calculateArea();
     }
