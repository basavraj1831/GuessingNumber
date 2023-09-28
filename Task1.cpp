#include<iostream>
using namespace std;
#include<stdlib.h>
#include<time.h>

int main()

{
   int number,guess,nguesses=1;
  
   srand(time(0)); // to generate random number 

   cout <<"\n\n\t\t** WELCOME TO MY PROGRAM..**\n"<< endl;

   number =rand()%100 + 1; // computer generates random number 

 do
   {
  
     cout<<"Guess the Number between[1-100]:";
     cin>>guess; // user Guessed number 

    if (guess<number) 
    
     {
        cout<<"Higher Number Please!!\n"<<endl;
      }
    
    else if (guess>number)
     {
        cout<<"Lower Number Please!!\n"<<endl;
      }
    
    else
     {
        cout<<"\n\nYOU ACHIEVED..!!"<<endl;
        cout<<"Your Attempts To Guess The Number Is: "<<nguesses;
      } 
    
        nguesses++;

   }
    while(guess!=number);
    
  return 0;
  
 }