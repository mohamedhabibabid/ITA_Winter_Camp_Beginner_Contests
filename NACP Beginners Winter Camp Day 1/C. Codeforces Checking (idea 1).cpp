#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; // number of test cases
    cin>>t; 
    
    for(int i=0; i< t; i++){
        char c; 
        cin>>c;
        string s="codeforces";
        if(c=='c' || c=='o' || c=='d' || c=='e' || c=='f' || c=='r' || c=='s'){ 
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
