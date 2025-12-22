#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; // number of test cases
    cin>>t; 
    
    for(int i=0; i< t; i++){
        string s; 
        cin>>s;
        int n=s.size();
        if(n>10){
            cout<<s[0]<<n-2<<s[n-1]<<endl;
        }else{
            cout<<s<<endl;
        }
    }
    
    return 0;
}
