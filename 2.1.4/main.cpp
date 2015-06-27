#include <iostream>
#include<cstring>

using namespace std;

        const int destSize = 15;   //length of destination string - must be declared as a constant

int main()
{
    int my_string_len(char str[]);  //declaring methods
    void my_string_cat(char dest[], char src[], int dest_size);


    char source[] = "first";
    char dest[destSize] = "second";
    cout<<"Length of source: "<<my_string_len(source)<<endl;   //print out length of strings
    cout<<"Length of destination: "<< my_string_len(dest)<<endl;
    my_string_cat(dest, source, destSize);

    return 0;
}
int my_string_len(char str[]){
    int count = 0;
    int i = 0;
    while(str[i] != '\0'){   //string terminated by null character
        count++;
        i++;
    }
    return count;
}
void my_string_cat(char dest[], char src[], int dest_size){
    int lenSource = my_string_len(src);
    int lenDest = my_string_len(dest);
    int diff = destSize - lenDest;  //difference between length of strings and characters currently in string
    if(diff >= lenSource){   //if enough spaces
        strcat(dest, src);
        cout<<"Combined Length: "<<my_string_len(dest)<<endl;
         cout<<dest<<endl;
   }else{
        cout<<"Error, not enough space left to join strings "<<endl;
   }

}
