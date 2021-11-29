#include "StockManagment.h"

string StockManagment::Stock()
{
    cout<<"What do you want to make?"<<endl;
    cout<<"1/ CreateNewArticle \n 2/ModifyArticle \n 3/ WatchArticle \n 4/DeleteArticle"<<endl;
    int stockChoice;
    cin >> stockChoice;
    if (stockChoice==1)
    {
        StockManagment stockcreate;
        cout<<stockcreate.CreateNewArticle()<<endl;
    }
    if (stockChoice == 2) {
        StockManagment stockmodify;
        cout << stockmodify.ModifyArticle() << endl;
    }
    if (stockChoice == 3) {
        StockManagment stockshow;
        cout << stockshow.ShowArticle()<<endl;
    }
    if (stockChoice == 4) {
        StockManagment stockdelete;
        cout << stockdelete.DeleteArticle()<<endl;

    }
    return string();
}

string StockManagment::CreateNewArticle()
{
    cout <<"Create New Article"<<endl;
    cout << "For create new article I need more information" << endl;
    cout << "Name?";
    string NameArticle;
    cin.ignore();
    getline(cin, NameArticle);
    cout << "Description?"<<endl;
    string descriptionArticle;
    cin.ignore();
    getline(cin, descriptionArticle);
    cout << "Price?" << endl;
    float priceArticle;
    cin >> priceArticle;
    cout << "quantity?" << endl;
    int quantityArticle;
    cin >> quantityArticle;
    //Faire une requête sQL 
    return string();
}

string StockManagment::ModifyArticle()
{
    cout << "What's the Article ID" << endl;
    int idarticle;
    cin >> idarticle;
    if (idarticle==1)
    {
        //afficher les information de l'article
        cout << "What do you want to modify?" << endl;
        cout << "1/name \n 2/description \n 3/price \n 4/quantity"<< endl;
        int modifychoice;
        cin >> modifychoice;
        if (modifychoice == 1)
        {
            cout << "What is the new name?  " << endl;
            string newName;
            cin.ignore();
            getline(cin, newName);
            cout << "Thanks the new name is: " << newName << endl;

       }
        if (modifychoice == 2) 
        {
            cout << "what is the new description?" << endl;
            string newDescription;
            cin.ignore();
            getline(cin, newDescription);
            //requête pour la mettre dans la bonne ligne
           
        }
        if (modifychoice == 3)
        {
            cout << "What is the new price?" << endl;
            float modifyPrice;
            cin >> modifyPrice;
            cout << "the new price is : " << modifyPrice << endl;
            //requête pour la mettre dans la bonne ligne

        }
        if(modifychoice ==4){
            cout << "What is the new quantity ?" << endl;
            int newQuantity;
            cin >> newQuantity;
            cout << "the new quantity is :  " << newQuantity << endl;
            //requête pour la mettre dans la bonne ligne

        }
    }
    else {
    cout <<"Error ID wasn't found" << endl;
    }
    return string();
}

string StockManagment::ShowArticle()
{
    cout << "What's the Article ID" << endl;
    int idarticle;
    cin >> idarticle;
    if (idarticle == 1)
    {
        //requête pour afficher le ligne de l'id
    }
    else {
        cout << "Eroor ID wasn't found" << endl;
    }
    return string();
}

string StockManagment::DeleteArticle()
{
    cout << "What's the Article ID" << endl;
    int idarticle;
    cin >> idarticle;
    if (idarticle == 1)
    {
        cout << "You are sur to delete this item? yes/no" << endl;
        string deletechoice;
        cin >> deletechoice;
        if (deletechoice == "yes") {
            //requête pour supprimer le ligne de l'id
            cout << "Item was delete" << endl;
        }
        else {
            cout << "Item wasn't delete" << endl;
        }
        
    }
    else {
        cout << "Eroor ID wasn't found" << endl;
    }
    return string();
}
