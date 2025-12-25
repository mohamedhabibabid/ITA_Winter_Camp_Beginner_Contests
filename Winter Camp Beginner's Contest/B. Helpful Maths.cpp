#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s; 
    cin>>s;
    string n_1="", n_2="", n_3="";
    string ans="";
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1'){
            n_1+="1+";
        }else if(s[i]=='2'){
            n_2+="2+";
        }else if(s[i]=='3'){
            n_3+="3+";
        }
    }
    ans=n_1+n_2+n_3; //ans is larger than s with one char : the extra '+' at the end
    ans[s.size()]=' '; //we replace the extra '+' with a space 
    cout<<ans<<endl;
    return 0;
}
