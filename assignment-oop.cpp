#include<iostream>
using namespace std;
class Student
{
	public:
		string name;
		string rollNo;
		string department;
		string smester;
		float cgpa;
	public:
	void submitAssignment()
	{
	cout<<"students are submitting their assignment"<<endl;
         }
		};
	int main()
	{
		Student obj1;
		obj1.name="Hira";
		obj1.rollNo="twenty four";
		obj1.department="computer science";
		obj1.smester="second";
		obj1.cgpa=3.41;
			   
		cout<<"My name="<<name<<endl;
		cout<<"My rollNo="<<rollNo<<endl;
		cout<<"My department="<<department<<endl;
		cout<<"My smester="<<smester<<endl;
		cout<<"My cgpa="<<cgpa<<endl;

		obj1.submitAssignment();
         }
	         
	

