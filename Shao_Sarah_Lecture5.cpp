//Sarah Shao
//10/07/2024
//Lecture 5

#include <iostream>

using namespace std;

int main ()
{
    double start;
    double numOfTransactions;
    int type;
    int i;
    double credit;
    double debit;

    cout << "How much money did you bank accounts had at the start of the day?\n> ";
    cin >> start;
    cout << "How many bank transactions were done that day?\n> ";
    cin >> numOfTransactions;

    for (i = 0; i < numOfTransactions; i++)
        cout << "Was the transaction in debit or credit?\n1 = Credit 2 = Debit\n> ";
        cin >> type;
        if (type == 1)
        {cout << "How much money did you spend?\n> ";
         cin >> credit;
         start = start + credit;}
         else if (type == 2)
         {
            cout << "How much money did you spend?\n> ";
            cin >> debit;
            start = start - debit;
         }
    cout << start;

    return 0;

}