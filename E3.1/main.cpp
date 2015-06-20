#include <iostream>
#include <climits>     //to enable use INT_MAX and INNT_MIN
#include <iomanip>     // to use explicit precision

using namespace std;

int main()
{
    int num = 0,sum = 0, product = 1,high = INT_MIN, low = INT_MAX;
    float avr = 0;

    int x = 1;

    while(x <= 3){
        cout<<"enter number"<<endl;  //display messages
        cin>>num;    //get input
        sum = sum + num;
        product = product * num;
        if(num > high) high = num;
        if(num < low) low = num;
        x++;
    }
    cout.setf(ios::fixed, ios::floatfield); //to print out floats
    cout.setf(ios::showpoint);   //to print out decimal point
    cout<<"Sum: " << sum<<endl<<"Product: "<<product<<endl<<"Max: "<<high<<endl<<"Min: "<<low<<endl
    <<"Average: "<<setprecision(2)<<float(sum)/float(x-1)<<endl;  //precision set to 2 decimal places, 1 subtracted as while loop has increased x by one before terinating

    return 0;
}
