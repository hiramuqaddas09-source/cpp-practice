#include <iostream>
using namespace std;
class Account
{
    private:
    int accountNO;
    string accountTitle;
    public:
    void SetAccountNo(int accNo)
    {
    	accountNo =accNo;
	    }
    void SetAccountTitle(string accTitle)
    {
    	accountTitle =accTitle;
	    }
	int GetAccountNo()
	{
		return accountNo;
	} 
	string GetAccounttitle()
	{
		return accountTitle()
	   }   
	    	};
	    	int main ()
	    	{
	    		Account acc1;
	    		Account acc2;
	    		acc1.SetAccountNo(123456);
	    		acc2.SetAccountNo("ALI");
	    		cout<<"My accountNo.="<<acc1.GetAccountNo();
			cout<<"My accountTitle="<<acc1.GetAccountTitle();	
				        }
