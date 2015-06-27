/**The greatest common divisor (GCD) of two integers is the largest
integer that evenly divides into each of the two integers. Write and function called gcd
that returns the greatest common divisor of two integers. The program should contain a
function called gcd, with appropriate parameters and return type, that provide all of the
logic for computing the gcd of the two inputted numbers.
*/

#include <iostream>

using namespace std;

int main()
{
    int gcd(int a, int b);

    int num1, num2;
    cout<<"Enter two number, each number followed by enter"<<endl;
    cin>>num1>>num2;
    int ans = gcd(num1, num2);
    cout<<"GCD is "<<ans<<endl;

    return 0;
}
int gcd(int a, int b){  //formula to calculate gcd(b, amodb) - Euclid's algorithm
    int rem = 0;
    while(b > 0){
 //       cout<<"A: "<<a<<" B: "<<b<<" REM: "<<rem<<endl;
        rem = a % b;
        a = b;
        b = rem; //when remainder is 0 the last divisor i.e. b is the gcd
    }
    return a;  //return a as the value of b was assigned to a
}
