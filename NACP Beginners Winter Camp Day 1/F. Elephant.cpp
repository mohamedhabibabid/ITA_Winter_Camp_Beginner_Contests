#include <bits/stdc++.h>
using namespace std;

int main()
{
   int x; 
   cin>>x;
   if(x%5==0){ //5 is divisible by 5 <-> rest of the division of x by 5 is 0
       cout<<x/5<<endl; // you can reach x doing 5*k steps only -> number of steps is k
   }else{
       cout<<x/5 + 1 <<endl; // you do k steps but there is one step ramining 
   }
    return 0;
}
