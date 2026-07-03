#include <iostream>
using namespace std;
int main()
{
	
	int a[5]={10,20,30,40,50};
	int val;
	bool isFound;
	cout<<"Enter your vlaue=";
	cin>>val;
	for(int i=0; i<5; i++)
	{
		if (a[i]==val)
		{
			cout<<"Your value is at this index ="<<i<<endl;
			isFound=true;
			break;
		}
		else
		{
			isFound=false;
			cout<<"Your value is not in the array"<<endl;
		}
	}

}
