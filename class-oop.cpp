#include<iostream>
using namespace std;
class Student
{
	public:
		string name;
		string rollNo;
		string smester;
		float cgpa;
	public:
	void DisplayInfo()

	{
		cout<<"My name="<<name<<endl;
		cout<<"My rollNo="<<rollNo<<endl;
		cout<<"My smester="<<smester<<endl;
		cout<<"My cgpa="<<cgpa<<endl;
		}
};
      Student (string name,string rollNo,)
	int main()
	{
		Student obj1;
		Student obj2;
		Student obj3;
		Student obj4;
		Student obj5;
		
		obj1.name="Hira";
		obj1.rollNo="twenty four";
		obj1.smester="second";
		obj1.cgpa=3.41;
		
		obj2.name="Hammad";
		obj2.rollNo="twenty five";
		obj2.smester="second";
		obj2.cgpa=3.51;
		
		obj3.name="Seerat";
		obj3.rollNo="twenty six";
		obj3.smester="second";
		obj3.cgpa=3.61;
		
		obj4.name="Laiba";
		obj4.rollNo="twenty seven";
		obj4.smester="second";
		obj4.cgpa=3.71;
		
		obj5.name="Qamber";
		obj5.rollNo="twenty eight";
		obj5.smester="second";
		obj5.cgpa=3.81;
		
		obj1.DisplayInfo();
	         obj2.DisplayInfo();
	         obj3.DisplayInfo();
	         obj4.DisplayInfo();
	         obj5.DisplayInfo();
	         
	}

