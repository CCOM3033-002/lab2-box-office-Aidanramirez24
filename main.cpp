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

    //im going to try and separate each setw or output by making individual collumns using left and right 

    cout<< left << setw(27) << "Movie name:";

    cout<< right <<setw(26)<<movie_name<< endl;

    cout<< left << setw(27) << "Adult tickets sold:";

    cout<< right << setw(23) << adult_tickets << endl;

    cout<< left << setw(27) << "child tickets sold:";

    cout << right << setw(23)<< child_tickets << endl;

    cout<< setprecision(2) << fixed;

    cout<< left << setw(27) << "gross box income:";

    cout << right << setw(18) <<"$"<< gross_box << endl;

    cout << left << setw(27)<<"Net box office income:" ;

    cout << right << setw(19) <<"$ "<< net_box << endl;

    cout << left << setw(27) << "amount paid to distributor:";

    cout << right << setw(18) << "$" << paid << endl;

    //made it column by column very tideous but might work
    //ok so i fixed a lot i noticed that the reason as to why it was appearing out of line is because some of thesew strings use more space than others
    // so logically they can't all be the sam size if i want the to be alignes so i tried using setw27 so that all the left column occupied the same amount of bits
    //or bytes whatever but in the end i think right the command might write over them so i opted to aligning them a bit more manually via using different setw amounts for different outputs
    



   





    


}
