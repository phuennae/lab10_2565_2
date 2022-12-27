#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	double balance,intper,pay;
	int i=1;
	cout << "Enter initial loan: ";
	cin>>balance;
	cout << "Enter interest rate per year (%): ";
	cin>>intper;
	cout << "Enter amount you can pay per year: ";
	cin>>pay;

	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
do{
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << balance;
	double interest=intper/100*balance;
	cout << setw(13) << left << interest;
	cout << setw(13) << left << balance+interest;
	double total=balance+interest;
	if(total<pay){
		pay=total;
	}
	cout << setw(13) << left << pay;
	cout << setw(13) << left << (balance+interest)-pay;
	cout << "\n";	
	i++;
	balance=(balance+interest)-pay;
}while(balance>0);
	return 0;
}
