#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

void Draw ()
{

    cout << "\t******************************* \n";
    cout << "\t   Welcome to SimpleCalc \n";
    cout << "\t******************************* \n";
    string name;
    cout << "\t\t\n Please input your name \n\n";
    getline (cin, name);
    system ("CLS");
    cout << "\n\t******************************* \n";
    cout << "\t     Welcome "<<name<<" \n";
    cout << "\t******************************* \n\n";

}

double Calc (double i, double j, char c)
{
    double k;

    if (c == '+')
        k = i + j;
    else if (c == '-')
        if (i<j)
            k = j - i;
        else
            k = i - j;
    else if (c == '/')
        if (j == 0)
            cout << "Error...cannot divide with zero! \n";
        else
            k = i/j;
    else
        k = i*j;

    return k;
}
int main (int argc, char **argv)
{
     string answer;
    do
    {
        Draw ();
        char d;
        double a, b;
        cout <<"\t Please input a number: \n";
        cin >>a;
        cout <<"\t Please input another number: \n";
        cin >>b;
        cout <<"\t Please input an operator: (+, -, /, *)\n";
        cin >>d;
        double g = Calc (a,b,d);
        cout <<"\n\tThe answer is;  "<< g << "\n";
        cout << "\n";
        system ("Pause");
        cout << "\n\t Would you like to use SimpleCalc again? (Yes/No) \n ";
        cin >> answer;
        system ("CLS");
    }
    while (answer != "No" );
        cout << "\n\tThank you for using SimpleCalc. \n";
        cout << "\t Exiting..... \n";

    return 0;
}
