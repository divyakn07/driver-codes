#include <iostream>

#include<bits/stdc++.h>
using namespace std;

string solve (int n) {
   // Your code goes here
   int sum=0
      while(n>0 || sum>9)
      {
         if(n==0)
         {
            n=sum;
            sum=0;
         }
         sum+=n%10;
         n/=10;
         
   // n is the given input
   return (sum==1);
}

// The main function reads the input in the required format.
// Just complete the solve function above.
int main()
{
   int n=1234;
   if(solve(n))
      cout<<"Magic number";
   else
      cout<<"normal number";
   return 0;
}
