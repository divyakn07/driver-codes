#include <iostream>

#include<bits/stdc++.h>
using namespace std;

bool solve (int n) {
  int sum=0;
   while(n>0|| sum>9)
   {
      if(n==0)
      {
         n=sum;
         sum=0;
      }
      sum+=n%10;
      n/=10;
   }
   return (sum==1);
}

int main() {
      int n=1234;
      if(solve(n))
         cout<<"Magic number";
      else
         cout<<"Normal number";
      return 0;
   }
