#include "OrderManagment.h"

string OrderManagment::Order()
{
	int orderchoice;
	cout << "what do you want to make" << endl;
	cout << "1/create order\n 2/modify order \n 3/ Watch order\n 4/Delete order" << endl;
	cin >> orderchoice;
	if (orderchoice == 1) {
		OrderManagment ordermanagmentCreate;
		cout<< ordermanagmentCreate.OrderCreate()<< endl;

	}
	if (orderchoice == 2); {
		OrderManagment ordermanagmentModify;
		cout << ordermanagmentModify.OrderModify() << endl;
	}
	if (orderchoice == 3)
	{
		OrderManagment ordermanagmentshow;
		cout << ordermanagmentshow.OrderWatch() << endl;
	}
	if(orderchoice==4)
	{
		OrderManagment ordermanagmentDelete;
		cout << ordermanagmentDelete.OrderDelete() << endl;
	}
	return string();
}

string OrderManagment::OrderCreate()
{
	cout << "ready to create order?" << endl;

	return string();
}

string OrderManagment::OrderModify()
{
	cout << "modify order" << endl;
	return string();
}

string OrderManagment::OrderWatch()
{
	cout<<"what order do you want to watch" << endl;
	//faire une requêtes qui affiche toutess les commandes de l'acheteur
	cout << "What order do you want to watch?" << endl;
	int orderNumberWatch;
	cin >> orderNumberWatch;
	

	return string();
}

string OrderManagment::OrderDelete()
{
	cout << "what order do you want to delete" << endl;
	//faire une requêtes qui affiche toutess les commandes de l'acheteur
	cout << "What order do you want to delete ?" << endl;
	int orderNumberDelete;
	cin >> orderNumberDelete;
	//afficher les information de la commande
	cout << "Are you sur to delete this order?" << endl;
	string answerDelete;
	cin >> answerDelete;
	if (answerDelete == "yes")
	{
		//requête pour supprimer la ligne
		cout << "Order was delete" << endl;

	}
	else
	{
		cout << "the order wasn't delete" << endl;
	}
	return string();
}
