#include <iostream>
#include <iomanip> // el uso de iomanip es porque para este projecto se usan muchos input manipulators
#include <string>
using namespace std; // basic starter for programming in c++


int main()
{
    int adult_tickets, child_tickets;
    string movie_name;
    double gross_box, net_box, paid;

    cout << "This program calculates the Gross and Net Box office profit and the distributer's profit of a movie playing in a theater." << endl;

    cout << "please enter the movie name:" << endl;

    cin>>movie_name;

    cout << "Please enter the amount of adult tickets sold:"<< endl;

    cin>>adult_tickets;


    cout << "please enter the amount of child tickets sold:"<< endl;

    cin>>child_tickets;

    gross_box= (adult_tickets*10) + (child_tickets*6);
    net_box= (gross_box/100)*20;
    paid= gross_box - net_box;
    //the basic mathematical equation for the gross box, net box and paid

    cout<< "Movie name:"<< setw(30)<<movie_name<< endl;

    cout<< "Adult tickets sold:"<< setw(15) << adult_tickets << endl;

    cout<< "child tickets sold:"<< setw(15)<< child_tickets << endl;

    cout<< setprecision(2) << fixed;

    cout<< "gross box income:"<< right << setw(15) <<"$"<< gross_box << endl;

    cout << "Net box office income:" <<right<< setw(10) <<" $ "<< net_box << endl;

    cout << "amount paid to distributor:"<< right << setw(5) << "$" << paid << endl;



   





    


}
