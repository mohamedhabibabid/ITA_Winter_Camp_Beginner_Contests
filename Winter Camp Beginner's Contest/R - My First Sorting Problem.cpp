#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i< t; i++){
        int x, y; 
        cin>>x>>y;
        cout<<min(x,y)<<' '<<max(x,y)<<endl; //min returns the minimum of two values,
        //  max returns the maximum of two values
        //  :=> otherwise we can replace max and min with conditional if to determine which one is smaller and which one is bigger
    }
    return 0;
}
