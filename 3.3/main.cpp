/** Write a program that inputs a five-digit number, separates the number
into its individual digits and prints the digits separated from one another by three spaces
each.
*/
#include <iostream>
#include <cstdlib>
#include<ctime>;
using namespace std;

int main()
{
    srand(time(0));  //sets seed for random generator to ensure different numbers each time

    int num = (rand() % 90000) + 10000;    //will give num ers between 100000 and 99999
    int divisor = 10000;
    cout<< "The number is " << num <<endl<<"The digits are: "<<endl;
    for(int i = 0; i < 5; i++){
        cout<<num/ divisor<<endl;
        num = num % divisor;
        divisor = divisor / 10;
    }


    return 0;
}
