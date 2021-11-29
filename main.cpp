#include <iostream>
#include <string>
#include "GestionClient.h"
#include "GestionPersonnel.h"
#include "OrderManagment.h"
#include "Statistics.h"
#include "StockManagment.h"
using namespace std;


int main()											//fonction principal
{
	int choixGestion;
	cout << "\n  HEY" << endl;						//Write Hey to begin the program
	cout << "1/Customer\n2/Staff\n3/Order\n4/stock\n5/statistics"<<endl;//The user choice what he want
	cin >> choixGestion;							//Read the answer from the user end make this into the variable choixgestion
	if (choixGestion == 1) {						//if the user answer is 1 
		GestionClient Customerclass;				// Go to the class Customer and execute the program inside this class
		cout << Customerclass.Customer() << endl;	//Print the program
		
	}
	if (choixGestion == 2) {						//if the user answer is 2
		StaffManagment Staffclass;					// Go to the class Staff and execute the program inside this class
		cout <<Staffclass.Satff() << endl;

	}
	if (choixGestion == 3) {
		OrderManagment orderclass;
		cout << orderclass.Order() << endl;
		//GestionClient Classecustomer;
		//cout<<Classecustomer.Customer() << endl;

	}
	if (choixGestion == 4) {
		StockManagment stockclass;;
		cout << stockclass.Stock() << endl;
		//GestionClient Classecustomer;
		//cout<<Classecustomer.Customer() << endl;

	}
	if (choixGestion == 5) {
		Statistics statisticsclass;
		cout << statisticsclass.stat() << endl;
	}
}