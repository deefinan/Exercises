/**   Write a program that inputs three integers from the keyboard, and
prints the sum, average, prodcut, smallest and largest of these numbers.
*/
#include <iostream>

using namespace std;

int main()
{
    int first, second;
    cout<<"Enter each number folled by enter"<<endl;
    cin>>first>>second;    //stores the first number dentered in first and the second in second
    if(first % second == 0) cout<<first<< " is a multiple of " << second;
    else cout<<first<< " is not a multiple of " << second;
    return 0;
}
