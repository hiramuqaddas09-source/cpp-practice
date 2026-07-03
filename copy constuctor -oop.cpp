#include <iostream>
using namespace std;
class Square
{
	private:
		int length;
		int width;
	public:
	 Square (int l,int w)
	 {
	 	length = l;
	 	width = w;
		 }	

   Square (Square $S)
   {
   	length = S.length;
   	width = S.width;
   }
   void calArea()
   {
   	cout<<"Area ="<<length*width;
	      }
	      };
	      int main
	      {
	      	Square S1(10,30);
	      	Square S2(S1);
	      	Square S3(S1);
	      	S1.calArea();
		S2.calArea();
		S3.calArea();    
		       }
