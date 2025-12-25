#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i< t; i++){
        string s; 
        cin>>s;
        char c=s[0];
        int index=-1;
        bool is_s_distinct=false;
        for(int i=1; i< s.size(); i++){
            if(s[i]!=c){
                is_s_distinct=true;
                index=i;
            }            
        }
        if(is_s_distinct==false){
            cout<<"NO"<<endl;
        }else{
            char old_s_index=s[index];
            s[index]=c;
            s[0]=old_s_index;
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
    }
    return 0;
}
