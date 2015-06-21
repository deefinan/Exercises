#include <iostream>

using namespace std;

    int balance [2][100]= {{25, 56, 127, 212}, {150, 500, 200, 250}};   //To provide opening balances, would normally come from a database

int main()
{
    int index;
    float charges, credits, crLimit;
    while(true){
        cout<<"Enter customer number or -1 if finished"<<endl;
        cin>>index;
        if(index == -1) break;
        char ans;     //to hold anwer to question re new accout status
        cout<<"Is this a new account? Enter y or n"<<endl;  //for the pruposes of this a
        cin>>ans;
        if(ans == 'y'){    //if it is a new account the balancce is initiallised to 0 and the credit limit is set
            balance[0][index] = 0;
            cout<<"Enter Credit Limit"<<endl;
            cin>>crLimit;
            balance[1][index] = crLimit;
        }
 //put in code for incorrect answer

    cout<<"Charges for the month"<<endl;
    cin>>charges;
    cout<<"Enter credits for the month"<<endl;
    cin>>credits;

    balance[0][index] = balance[0][index] + charges - credits;
    if(balance[0][index] < balance[1][index])
    cout<<"Balance: "<<balance[0][index]<<endl;
    }
    return 0;
}
