#include <iostream>
using namespace std;
class Square 
{
	private:
		int length;
		int width;
	public:
	 Square(int l,int w)
	 {
	 	length = l;
	 	width = w;
	 }
	void calArea()
	{
		cout<<"Area ="<<length*width<<endl;
	}	 	
};
      int main ()
      {
      	Square S1(30,40);
      	Square S2(19,74);
      	Square S3(50,80);
      	Square S4(90,20);
      	Square S5(59,21);
      	
      	S1.calArea();
      	S2.calArea();
      	S3.calArea();
      	S4.calArea();	
	S5.calArea();
      	
      }
	
