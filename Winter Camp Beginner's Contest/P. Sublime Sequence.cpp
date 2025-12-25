#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i< t; i++){
        int n; 
        cin>>n;
        int tab[n];
        int minial_num_in_table=10;
        int number_of_zeros=0;
        long long product=1;
        for(int i=0; i< n; i++){
            cin>>tab[i];
            minial_num_in_table=min(tab[i],minial_num_in_table);
            if(tab[i]==0){
                number_of_zeros++;
            }
        }
        // cout<<minial_num_in_table<<endl;
        if(number_of_zeros>=2){
            cout<<0<<endl;
        }else{
            for(int i=0; i<n; i++){
              
                if(tab[i]!=0){
                    product*=tab[i];
                }
                // cout<<product<<' ';
            }
            if(number_of_zeros==1){
                cout<<product<<endl;
            }else{
                product/=minial_num_in_table;
                product*=(minial_num_in_table+1);
                cout<<product<<endl;
            }
        }
        // cout<<product<<endl;
    }
    return 0;
}
