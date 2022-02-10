#include <iostream>

using namespace std;

int main()
{ 
    char choice;
    int num1,num2;
    int sum,diff,mult,division;
    cout<<("+,-,*,/");
    cout<<"Enter your choice:";
     cin>>choice;
     cout<<"Enter two numbers";
     cin>>num1>>num2;
     switch(choice){
         case '+':
         sum=num1+num2;
         cout<<"sum is"<<sum;
         break;
         case '-':
         diff=num1-num2;
         cout<<"Difference is"<<diff;
         break;
         case '*':
         mult=num1*num2;
         cout<<"product is"<<mult;
         break;
         case '/':
         division=num1/num2;
         cout<<"Quotient is"<<division;
         break;
         default:
         cout<<"Wrong choice";
         
         
     }
     
    

}
