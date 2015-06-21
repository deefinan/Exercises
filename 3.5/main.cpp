/**Print out prime numbers between 1 and 5000
*/
#include <iostream>

using namespace std;

int main()
{
    cout<<"1, ";
   for(int i=2; i <= 5000; i++)
   {
       bool prime = false;
       for(int j = 2; j < i; j++){
            if(i%j == 0) {
                prime = false;
                break;
            }
            prime = true;
       }
       if(prime) cout<<i<< ", ";
   }
    return 0;
}
