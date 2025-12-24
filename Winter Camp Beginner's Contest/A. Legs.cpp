#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin>>t;
    
    for(int i=0; i< t; i++){
        int n; //number of legs
        cin>>n;
        /*
            The minimum number of animals
            <=> maximum number of cows & minimum number of chickens
            <=> maxmimize number of cows & minimize number of chickens
        */
        if(n%4==0){  //would n be only just cows? n%4==0? if so -> we can 
                     // maximize number of animals just considering cows
            cout<<n/4<<endl;
        }else{
            cout<<n/4 + 1<<endl;
        }
    }

    return 0;
}
