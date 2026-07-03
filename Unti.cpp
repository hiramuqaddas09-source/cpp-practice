#include <iostream>
using namespace std;
class car
{
	public:
		string brand;
		int year;
	void display()
	{
		cout<<"brand:"<<brand<<endl;
		cout<<"year:"<<year<<endl;
		}	
};
    int main(){
    
    car obj1;
    obj1.brand="toyota";
    obj1.year=2020;
    
    obj1.display();
}
    
    
