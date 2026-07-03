#include <iostream>
using namespace std;
class Student
{
	private:
		string name ;
		int rollNo;
		float cgpa;
	public:
	     Student(string n , int r , float c )
	     {
	     	name = n;
	     	rollNo =r;
	     	cgpa =c ;
	     }
	     void displayInfo()
	     {
		cout<<"My name="<<name<<endl;
		cout<<"My rollNo="<<rollNo<<endl;
		cout<<"My cgpa="<<cgpa<<endl;
	     }
};
	int main()
	{
		Student obj1("Hira",24,3.41);
		Student obj2("Arooj" ,25 ,3.51);
		Student obj3("Seerat",26,3.61);
		Student obj4("Sonia",27, 3.71);
		Student obj5("Fatima",28,3.81);
		
		obj1.displayInfo();
	         obj2.displayInfo();
	         obj3.displayInfo();
	         obj4.displayInfo();
	         obj5.displayInfo();
	}


