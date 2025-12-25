#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin>>t;
    for(int i=0; i< t; i++){
        string s;
        cin>>s;
        int sum_first3=0,sum_last3=0;
        for(int i=0; i< 3; i++){
            sum_first3+=s[i]-'0';
        }
        for(int i=3; i< 6; i++){
            sum_last3+=s[i]-'0';
        }
        if(sum_last3==sum_first3){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
