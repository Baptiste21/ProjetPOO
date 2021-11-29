#include "GestionPersonnel.h"


string StaffManagment::Satff()
{
	int StaffChoice;
	cout << "Staff managment" << endl;
	cout << "1/Create staff account" << endl;
	cout << "2/Modify Staff account" << endl;
	cout << "3/Show staff account" << endl;
	cout << "4/Delete staff account" << endl;
	cout << "return" << endl;
	cin >> StaffChoice;
	if (StaffChoice == 1)
	{
		StaffManagment ClassCreateStaff;
		cout << ClassCreateStaff.CreateStaff() << endl;

	}
	if (StaffChoice == 2)
	{
		StaffManagment ClassModifyStaff;
		cout << ClassModifyStaff.ModifyStaff() << endl;

	}
	if (StaffChoice == 3)
	{
		StaffManagment ClassShowStaff;
		cout << ClassShowStaff.ShowStaff() << endl;

	}
	if (StaffChoice == 4) {
		StaffManagment ClassDeleteStaff;
		cout << ClassDeleteStaff.DeleteStaff() << endl;

	}


	return string();
}

string StaffManagment::CreateStaff()
{
	cout << "New staff member. Hello" << endl;
	cout << "some steps before the end of your account creation" << endl;
	cout << "I need some additional information" << endl;
	cout << "Las name?" << endl;
	string lastNameStaff;//variable for the last Name
	string firstNameStaff;//variable for know the first name
	cin >> lastNameStaff;//Wait the User answer and write it on this variable 
	cout << "First name?" << endl;//request the name of the staff member
	cin >> firstNameStaff;//Wait the User answer and write it on this variable 
	cout << "First name line manager?" << endl;//request the name of the Line managment
	string firstnamlineManager;//variable for know this line management
	cin >> firstnamlineManager;//Wait the User answer and write it on this variable 
	cout << "Last name line manager?" << endl;//request the name of the Line managment
	string lastnamlineManager;//variable for know this line management
	cin >> lastnamlineManager;//Wait the User answer and write it on this variable 
	///adress///
	int streetNumber;
	string street;
	string city;
	int zipCode;
	cout << "Can you give me your street number" << endl;
	cin >> streetNumber;
	cout << "Give me your street " << endl;
	cin.ignore();
	getline(cin, street);
	cout << "Your city" << endl;
	cin >> city;
	cout << "And your Zipcode" << endl;
	cin >> zipCode;
	cout << "You live on ";cout << streetNumber;cout << " ";cout << street;cout << ",";cout << city;cout << ",";cout << zipCode << endl;
	////date of employement//////
	cout << "Date of employement?(month/day/year)" << endl;
	string dateEmployment;
	cin >> dateEmployment;
	
	return string();
}

string StaffManagment::ModifyStaff()
{
	cout << "For start the modification I need your ID_customer" << endl;
	int ID_Customer;
	cin >> ID_Customer;
	if (ID_Customer == 1/*requête pour prendre la ligne avec l'id client*/)
	{
		//reqête pour afficher toute la ligne
		cout << "What do you want to modify?" << endl;
		cout << "Modify customer" << endl;
		cout << "1/Modify Last name?" << endl;
		cout << "2/Modify First name?" << endl;
		cout << "3/Modify adress" << endl;
		cout << "4/Modify line managment" << endl;
		cout << "5/Date of employement" << endl;
		int modifychoicestaff;
		cin >> modifychoicestaff;
		if (modifychoicestaff == 1)
		{
			string modifyLastName;
			cout << "What is the last name?" << endl;
			cin >> modifyLastName;
			//faire une requête pour recuperer le nom, puis l'afficher
		}
		if (modifychoicestaff == 2)
		{
			string modifyFirstName;
			cout << "What is the first name?" << endl;
			cin >> modifyFirstName;
			//faire une requête pour recuperer le prenom, puis l'afficher
		}
		if (modifychoicestaff == 3)
		{
			//faire une requête pour recuperer l'adress, puis l'afficher
			int modifystreetNumber;
			string modifystreet;
			string modifycity;
			int modifyzipCode;
			cout << "Can you give me your street number" << endl;
			cin >> modifystreetNumber;
			cout << "Give me your street " << endl;
			cin.ignore();
			getline(cin, modifystreet);
			cout << "Your city" << endl;
			cin >> modifycity;
			cout << "And your Zipcode" << endl;
			cin >> modifyzipCode;
			cout << "Your new adress is: ";cout << modifystreetNumber;cout << " ";cout << modifystreet;cout << ",";cout << modifycity;cout << ",";cout << modifyzipCode << endl;
		}
		if(modifychoicestaff==4)
		{
			cout << "First name line manager?" << endl;//request the name of the Line managment
			string modifyfirstnamlineManager;//variable for know this line management
			cin >> modifyfirstnamlineManager;//Wait the User answer and write it on this variable 
			cout << "Last name line manager?" << endl;//request the name of the Line managment
			string modifylastnamlineManager;//variable for know this line management
			cin >> modifylastnamlineManager;//Wait the User answer and write it on this variable 
		}
		if(modifychoicestaff==5)
		{
			cout << "Date of employement?(month/day/year)" << endl;
			string modifydateEmployment;
			cin >> modifydateEmployment;
		}
	}
	else {

	}
	return string();
}

string StaffManagment::ShowStaff()
{
	cout << "For start the modification I need your ID_customer" << endl;
	int ID_Staff;
	cin >> ID_Staff;
	if (ID_Staff == 1/*requête pour prendre la ligne avec l'id staff*/)
	{
		//faire une requête pour montrer la ligne avec cette id staff
	}

	else
	{
		cout << ID_Staff;cout << "This customer ID wasn't foud" << endl;
		cout << "Sorry but this customer doesn't exist";
		int pause;
		cin >> pause;
	}
	return string();
}

string StaffManagment::DeleteStaff()
{
	cout << "For start the modification I need your ID_customer" << endl;
	int ID_Staff;
	cin >> ID_Staff;
	if (ID_Staff == 1/*requête pour prendre la ligne avec l'id client*/)
	{
		//afficher le nom et prenom de cette id client
		string StaffFirstName;//prendre le nom du client qui va avec l'id client et le mettre dans cette variable
		string StaffLastName;//prendre le nom du client qui va avec l'id client et le mettre dans cette variable
		cout << "You will delete the client account with this information:";cout << StaffLastName;cout << StaffFirstName;cout << "\n You want to delete this account?" << endl;
		string answerDeleteStaff;
		cin >> answerDeleteStaff;
		if (answerDeleteStaff == "yes") {
			cout << "Account was delete" << endl;
			//faire une requête pour supprimer la ligne avec cette id client
		}
		else
		{
			cout << "The account wasn't delete" << endl;
		}

	}

	else
	{
		cout << ID_Staff;cout << "This customer ID wasn't foud" << endl;
		cout << "Sorry but this customer doesn't exist";
		int pause;
		cin >> pause;
	}
	return string();
}
