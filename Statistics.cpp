#include "Statistics.h"

string Statistics::stat()
{
    //Average basket price
    cout<<"Statistic"<<endl;
    cout << "1/Average basket price \n 2/turnover over one month \n 3/......." << endl;
    int statisticChoice;
    cin >> statisticChoice;
    if(statisticChoice==1)
    {
        cout << "Average basket price" << endl;
    }
    if (statisticChoice == 2)
    {
        cout << "turnover over one month" << endl;
        Statistics choiceTurnerover;
        cout << choiceTurnerover.Turnoverovermonth() << endl;
    }
    if (statisticChoice == 3)
    {

    }
    if (statisticChoice == 4)
    {

    }
    if (statisticChoice == 5)
    {

    }
    if (statisticChoice == 6)
    {

    }
    return string();
}

string Statistics::AverageBasketPrice()
{
    //requète qui fait la moyenne de la colonne du prix de chaque panier vendu
    return string();
}

string Statistics::Turnoverovermonth()
{
    cout << "Which month do you want?" << endl;
    int statiMonth;
    cin >> statiMonth;
    cout << "Which year do you want?" << endl;
    int statiYear;
    cin >> statiYear; 
    // requête pour faire la somme eds prix des commandes pendant le mois et l'année choisit 

    return string();
}


