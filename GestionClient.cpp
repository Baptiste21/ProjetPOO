#include "GestionClient.h"
string GestionClient::Customer()
{

	int CustomerChoice;
	cout << "Customer managment" << endl;
	cout << "1/Create customer account" << endl;
	cout << "2/Modify customer account" << endl;
	cout << "3/Show customer account" << endl;
	cout << "4/Delete customer account" << endl;
	cout << "return" << endl;
	cin >> CustomerChoice;
	if (CustomerChoice == 1) 
	{
		GestionClient ClassCreateCustomer;
	cout << ClassCreateCustomer.CreateCustomer() << endl;

	}
	if (CustomerChoice == 2)
	{
		GestionClient ClassModifyCustomer;
		cout << ClassModifyCustomer.ModifyCustomer() << endl;

	}
	if (CustomerChoice == 3)
	{
		GestionClient ClassShowCustomer;
		cout << ClassShowCustomer.ShowCustomer() << endl;

	}
	if (CustomerChoice == 4) {
		GestionClient ClassDeleteCustomerCustomer;
		cout << ClassDeleteCustomerCustomer.DeleteCustomer()<< endl;

	}

	
	return string();
}

string GestionClient::CreateCustomer()//this class is use to create Customer account
{
	cout << "New customer. Hello" << endl;
	cout << "some steps before the end of your account creation" << endl;
	cout << "I need some additional information" << endl;
	cout << "Las name" << endl;
	string lastNameCustomer;
	string firstNameCustomer;
	int birthdayDay;
	int birthdayMonth;
	int birthdayYear;
	cin >> lastNameCustomer;
	cout << "First name" << endl;
	cin >> firstNameCustomer;
	cout << "thanks ";
	cout << lastNameCustomer;
	cout << " ";
	cout << firstNameCustomer << endl;
	cout << "Your birthday date(for gift ^^)" << endl;
	cout << "The month" << endl;
	cin >> birthdayMonth;
	cout << "The day" << endl;
	cin >> birthdayDay;
	cout << "The years" << endl;
	cin >> birthdayYear;
	cout << "You are born ";cout << birthdayMonth;cout << "/";cout << birthdayDay;cout << "/";cout << birthdayYear << endl;
	cout << "Now I need your adress" << endl;
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
	cout << "And your Zipcode"<<endl;
	cin >> zipCode;
	cout << "You live on ";cout << streetNumber;cout << " ";cout << street;cout << ",";cout << city;cout << ",";cout << zipCode << endl;
	//requ^te pour rentrer toutes les information dans les bdd
	return string();
}

string GestionClient::ModifyCustomer()
{
	cout << "For start the modification I need your ID_customer" << endl;
	int ID_Customer;
	cin >> ID_Customer;
	if (ID_Customer==1/*requête pour prendre la ligne avec l'id client*/)
	{
		//reqête pour afficher toute la ligne
		cout << "What do you want to modify?" << endl;
		cout << "Modify customer" << endl;
		cout << "1/Modify Last name?" << endl;
		cout << "2/Modify First name?" << endl;
		cout << "3/Modify adress" << endl;
		cout << "4/Modify birthday date" << endl;
		int modifychoicecustomer;
		cin >> modifychoicecustomer;

		if (modifychoicecustomer == 1) 
		{
			string modifyLastName;
			cout << "What is the last name?" << endl;
			cin >> modifyLastName;
			//faire une requête pour recuperer le nom, puis l'afficher
		}
		if (modifychoicecustomer == 2)
		{
			string modifyFirstName;
			cout << "What is the first name?" << endl;
			cin >> modifyFirstName;
			//faire une requête pour recuperer le prenom, puis l'afficher
		}
		if (modifychoicecustomer == 3)
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
		if (modifychoicecustomer == 4)
		{
			int modifybirthdayDay;
			int modifybirthdayMonth;
			int modifybirthdayYear;
			cout << "Your birthday date(for gift ^^)" << endl;
			cout << "The month" << endl;
			cin >> modifybirthdayMonth;
			cout << "The day" << endl;
			cin >> modifybirthdayDay;
			cout << "The years" << endl;
			cin >> modifybirthdayYear;
			cout << "You are born ";cout << modifybirthdayMonth;cout << "/";cout << modifybirthdayDay;cout << "/";cout << modifybirthdayYear << endl;
			//faire une requête pour recuperer la date de naissance, puis l'afficher
		}
	}
	else
	{
		cout << ID_Customer;cout << "This customer ID wasn't foud"<<endl;
		cout << "Sorry but this customer doesn't exist";
		int pause;
		cin >> pause;
	} 
	
	
	
		
	return string();
}

string GestionClient::ShowCustomer()
{
	cout << "For start the modification I need your ID_customer" << endl;
	int ID_Customer;
	cin >> ID_Customer;
	if (ID_Customer == 1/*requête pour prendre la ligne avec l'id client*/)
	{
		//faire une requête pour montrer la ligne avec cette id client
	}

	else
	{
	cout << ID_Customer;cout << "This customer ID wasn't foud" << endl;
	cout << "Sorry but this customer doesn't exist";
	int pause;
	cin >> pause;
	}
	return string();
}

string GestionClient::DeleteCustomer()
{
	cout << "For start the modification I need your ID_customer" << endl;
	int ID_Customer;
	cin >> ID_Customer;
	if (ID_Customer == 1/*requête pour prendre la ligne avec l'id client*/)
	{
		//afficher le nom et prenom de cette id client
		string customerFirstName;//prendre le nom du client qui va avec l'id client et le mettre dans cette variable
		string customerLastName;//prendre le nom du client qui va avec l'id client et le mettre dans cette variable
		cout << "You will delete the client account with this information:";cout << customerLastName;cout << customerFirstName;cout << "\n You want to delete this account?"<<endl;
		string answerDeleteCustomer;
		cin>> answerDeleteCustomer;
		if (answerDeleteCustomer == "yes") {
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
		cout << ID_Customer;cout << "This customer ID wasn't foud" << endl;
		cout << "Sorry but this customer doesn't exist";
		int pause;
		cin >> pause;
	}
	return string();
}


