#include <iostream>
using namespace std;
//Codsoft Intership Task - 2
int main()
{
    cout << "Simple calculator"<<endl;
    int no1 , no2;
    cout <<"Enter first number : ";
    cin>>no1;
    cout <<"Enter second number : ";
    cin>>no2;
    char operation;
    cout<<"Enter your operations at\nFor Addition Enter : + \nFor Subtraction Enter : - \nFor Multiplication : * \nFor Division Enter : /\n";
   cin>>operation;
    switch(operation){
      case '+':
        cout<<"Operation - Addition\nOutput : "<<no1+no2;
         break;
      case '-':
        cout<<"Operation - Subtraction\nOutput : "<<no1-no2;
         break;
      case '*':
        cout<<"Operation - Multiplication\nOutput : "<<no1*no2;
        break;
      case '/':
        if(no2!=0){
        cout<<"Operation - Division\nOutput : "<<no1/no2;
        break;
        }
        else{
          cout<<"Zero Division Error";
          return 1;
        }
      default:
        cout<<"Something went wrong! , Try again ";
        return 1;
      }  
    return 0;
}
//code by Nitin Dubey 
