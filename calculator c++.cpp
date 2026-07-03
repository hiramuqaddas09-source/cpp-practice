#include<iostream>
using namespace std;
int main()
{
	int operand1, operand2;
	char op=NULL;
     
     {
     	cout<<"Enter operand 1 :\n"<<endl;
     	cin>>operand1;
     	cout <<"Enter operand 2:\n"<<endl;
     	cin>>operand2;
     	puts("Select an operator\n1.+\n2.-\n3.*\n4./\n");
     	cin>>op;
     	int result =0;
     	if (op == '+')
     	{
     	result = operand1 + operand2;	
	     }
	 else if (op =='-')
	{
		result = operand1 - operand2;
	}
	else  if (op == '*')
     	{
     	result = operand1 * operand2;	
	     }
	else if (op == '/')
     	{
     	result = operand1 / operand2;	
	     } 
	else 
	{
	cout<<"invalid operator";
	}
	cout<<"result:"<<result<<endl;
	system("cls");
}
     }

