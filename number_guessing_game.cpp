#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>
using namespace std;
//Code by : Nitin Dubey 
//CodSoft Intership Task - 1
int main()
{
  // Initialize random seed with current time to make results different every time the program runs
    srand(static_cast<unsigned>(time(0)));
    // Generates  random number between 1 and 100
    int randomno = 1 + (rand() % 100);
    int no;
    int count=0;
   
    cout<<"Welcome to the Number guessing game\n";
    cout<<"Enter the number between (1 - 100)\n";
    do{
    cout<<"Guess the number: "<<endl;
    cin>>no;
    count++;
    if(no>randomno){
      cout<<"Your Guess is too High, Enter lower number\n"<<endl;
    }
    else if(no<randomno){
      cout<<"Your Guess is too Low, Enter Higher number\n"<<endl;
    }
    else{
      cout<<"Congratulations!, Correct Guess your number is : "<<no<<endl;
      cout<<"Total number of guesses : "<<count;
      
    }
    }while (randomno!=no);
    
    return 0;
}