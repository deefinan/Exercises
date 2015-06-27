/**Write a program that simulates the rolling of two dice. The program
should call rand to roll the first die, and call rand again to roll the second die. The
sum of the two values should then be calculated. Your program should roll the pair of
dice a user specified number of times, keeping track of the number of times each possible
total value occurs. To do this it should use an array of 11 items (since there are only 11
possible outcomes i.e. 2 to 12). At the end of the run the program should print out, in
a tabulated format, the percentage of times each pair of values occurs. */


#include <iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>

using namespace std;

int main(){
   srand(NULL);    //set seed for random using clock
   int rollDice();    //declare methods
   int findNumDigits(int num);
   int numRolls, total;

   int totalVals [11] = {0,0,0,0,0,0,0,0,0,0,0};  //initialise array to zero
   cout<<"How many rolls would you like"<<endl;;
   cin>>numRolls;
   int width = findNumDigits(numRolls);  //needed to get correct tab width for print out



   for(int i = 0; i < numRolls; i++){

      total = rollDice();      //combined total of dice
      totalVals[total-2]++;    //array has only 11 slots 0 - 10, totals range from 2 - 12
   }
    for(int i = 0; i < 11; i++){
        cout<<"The value "<<setw(2)<< (i + 2)<< " appears "<<setw(width)<<totalVals[i] <<" times"<<endl;
        //add 2 back on to index to get correct total
    }

    return 0;

}
void rollDice(){
    int dice1 = (rand() % 6)+ 1;
    int dice2 = (rand() % 6)+ 1;
    int total = dice1 + dice2;

}
int findNumDigits(int num){
    int count = 0;
    while(num >= 1){
            count++;
            num = num/10;  //reduce number of digits left by 1
    }
    return count;
}
