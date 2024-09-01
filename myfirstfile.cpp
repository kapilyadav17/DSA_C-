#include<iostream>
using namespace std;
int main(){
   //to print factorials of first n numbers.
   int n;
   int factorial = 1;
   cout<<"enter the limit upto which you want to print the factorial : ";cin>>n;
   cout<<" the factorial of zero is : 1";
   for(int i=1 ; i<=n ; i++){
      factorial = factorial * i;
      cout<<"the factorial of "<<i<<" is : "<<factorial<<" \n";
   }

   return 0;
}