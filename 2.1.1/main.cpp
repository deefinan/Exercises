/** Write a function, called swap, that takes two integers as input and
swaps their values. To demonstrate that the function works you should write a program
that instructs the user to input two numbers. The program should store those numbers
in two separate variables. The program should then output the values stored in the two
variables to the screen, swap the two numbers by calling swap, and then again print
out the values stored in the two variables */

//This version changes the actal variable values as well as printing them out

#include <iostream>

using namespace std;

void swap(int *a, int *b);   //declaration of method

int main()
{
    int num1, num2;//
    cout<<"enter first number"<<endl;
    cin>>num1;
    cout<<"enter second number"<<endl;
    cin>>num2;
    cout<<"The first number is: " << num1 << " and the second number is: "<< num2 <<endl;
    swap(&num1, &num2);   //parameters passed as referencce so that values of the variables num1 and num2 will be swapped
    cout<<"The first number is now: " << num1 << " and the second number is now: "<< num2 <<endl;
    return 0;
}

void swap(int *a, int *b){  //pointers used as paramters
    int temp = *a;     //to store value of a
    *a = *b;
    *b = temp;
}
