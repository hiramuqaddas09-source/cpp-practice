#include<iostream>
using namespace std;
class account

 {
   private:
      
       string accountName;
       string pin;
	   
   public:
	   
       account(string accName,string pinCode)	
	{   
	   accountName =accName;
	   pin=pinCode;
	}
   bool changePin(string oldPin, string newPin) 
         {

	  if(oldPin == pin) 
	    {
                  pin = newPin;  
                  cout << "PIN changed successfully!" << endl;
                  return true;
             }
            else 
             {
                  cout << "Incorrect old PIN. Please try again." << endl;
                     return false;
             }
            }
         void displayInfo() 
	    {
               cout << "Account Number: " << accountName << endl;
             } 
 };
             
  int main()
	 {
	    account account1("000000","12343");
             cout << "Initial account information: " << endl;
             account1.displayInfo();
               int data 
             string oldPin, newPin;

             cout << "Enter your old PIN: ";
             cin >> oldPin;
             cout << "Enter your new PIN: ";
             cin >> newPin;
          
           if (account1.changePin(oldPin, newPin)) 
	      {
                 cout << "PIN changed successfully!" << endl;
                } 
	else 
	   {
              cout << "Failed to change the PIN." << endl;
            }

    
          cout << "Updated account information: " << endl;
          account1.displayInfo();

           return 0;
}



