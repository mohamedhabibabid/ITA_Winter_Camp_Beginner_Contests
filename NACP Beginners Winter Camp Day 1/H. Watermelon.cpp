#include <bits/stdc++.h>
using namespace std;

int main()
{
   int w;
   cin>>w;
   // the requirement is to divide weight into two weights such that each of them is even (pair)
   // -> it's not compulsory to divide the melon equally
   // -> if the weight is odd (impair), there is no way to divide it into two even weights
   // -> if the weight is 2 : we can only divide the w into 1kg + 1kg -> edge case
   if(w==2 || w%2==1){
       cout<<"NO"<<endl;
   }else{
       cout<<"YES"<<endl;
   }
    return 0;
}
