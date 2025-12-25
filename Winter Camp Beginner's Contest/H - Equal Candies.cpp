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
        int minim_num_candies_in_box=1e9; //we'll look for the box with the minimum number of candies in all the array
        for(int i=0; i< n; i++){
            cin>>tab[i];
            minim_num_candies_in_box=min(minim_num_candies_in_box,tab[i]);
        }
        long long eaten_candies=0;
        for(int i=0; i< n; i++){
            if(tab[i]>minim_num_candies_in_box){
                eaten_candies+=tab[i]-minim_num_candies_in_box;
            }
        }
        cout<<eaten_candies<<endl;
    }
    return 0;
}
