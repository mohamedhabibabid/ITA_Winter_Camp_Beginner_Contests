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
        bool found=false;
        for(int j=0; j<s.size(); j++){
            if(s[j]==c){
                found=true;
            }
        }
        if(found==true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
