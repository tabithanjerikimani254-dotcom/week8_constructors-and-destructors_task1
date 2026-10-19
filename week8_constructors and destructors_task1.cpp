# include <iostream>
using namespace std;
 class BankAccount{
	 private:
	 	string holder_name;
	 	int account_number;
	 	double account_balance;
	 	
	 	
	 	public:
	 		BankAccount(string h,int a, double b){
	 		       holder_name=h;
	 		       account_number=a;
	 		       account_balance=b;
     cout<<"account successfully created:"<<endl;}
     
	 		       
	 		       void display(){
	 		       	cout<<"=====BANK ACCOUNT DETAILS =====:"<<endl;
						cout<<"enter the holders name:"<<holder_name<<endl;
						cout<<"enter the account number:"<<account_number<<endl;
						cout<<"enter the account balance:"<<account_balance<<endl;
						cout<<"================================"<<endl; 
						}
						~BankAccount(){
							cout<<"account closed successfully:"<<endl;
						}
 };
 
 int main() {  
  BankAccount account1("Mary Wanjiku", 123456, 25000.00); 
  account1.display();
 return 0;
  }