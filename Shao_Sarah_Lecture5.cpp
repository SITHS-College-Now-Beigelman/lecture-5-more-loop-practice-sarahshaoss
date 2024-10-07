//Sarah Shao
//10/07/2024
//Lecture 5

#include <iostream>
//adds library
#include <iomanip>
//for set precision

using namespace std;
//shortcut

int main ()
{
    double start;
    // created variable for the starting amount
    double numOfTransactions;
    // created variable for the number of transactions
    int type;
    // created variable for a choice between credit or debit
    int i;
    // created variable for the loop
    double credit;
    // created variable for the credit amount
    double debit;
    // created variable for the debit amount
    double totalDebit;
    //creates variable for the total debit amount
    double totalCredit;
    //creates variable for the total credit amount

    cout << "How much money did you bank accounts had at the start of the day?\n> ";
    cin >> start;
    //stores data for the starting amount
    cout << "How many bank transactions were done that day?\n> ";
    cin >> numOfTransactions;
    //stores data for the number of transactions
    

    for (i = 0; i < numOfTransactions; i++) // creates loop for the amount of transactions
    {
        cout << "Was the transaction in debit or credit? 1 = Credit 2 = Debit\n> ";
        cin >> type;
        //stores data for the choice between credit or debit
        if (type == 1)
        // if the user input 1 for credit
        {
            cout << "How much money did you spend?\n> ";
            cin >> credit;
            //stores data for credit amount
            totalCredit = totalCredit + credit;
            //adds credit to total credit
            start = start + credit;
            //adds the starting amount and the credit because credit adds value to the bank account
            }
        else if (type == 2)
        // if the user input 2 for debit
        {
        cout << "How much money did you spend?\n> ";
        cin >> debit;
        //stores data for debit amount
        totalDebit = totalDebit + debit;
        //adds debit to total debit
        start = start - debit;
        //subtracts the debit from the startin amount because debit removes value from the bank account
        }
    }
    cout << "Total amount in your bank account at the end of the day: "<< "$" << fixed << setprecision(2) << start << endl;
    //prints total amount at the end
    cout << "Total debit amount: " << totalDebit << endl;
    //prints total debit
    cout << "Total credit amount: " << totalCredit << endl;
    //prints total credit

/* How much money did you bank accounts had at the start of the day?
> 200
How many bank transactions were done that day?
> 4
Was the transaction in debit or credit? 1 = Credit 2 = Debit
> 1
How much money did you spend?
> 20
Was the transaction in debit or credit? 1 = Credit 2 = Debit
> 2
How much money did you spend?
> 30
Was the transaction in debit or credit? 1 = Credit 2 = Debit
> 1
How much money did you spend?
> 10
Was the transaction in debit or credit? 1 = Credit 2 = Debit
> 2
How much money did you spend?
> 10
Total amount in your bank account at the end of the day: $190.00
Total debit amount: 40.00
Total credit amount: 30.00 */

    return 0; 
    //ends program

}