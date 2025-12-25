#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin>>n;
    int number_who_voted1=0;
    for(int i=0; i< n; i++){
        int vote;
        cin>>vote;
        number_who_voted1+=vote; //if vote =0 , adding 0 will not affect the sum, if vote is 1 then +1 is added to sum
    }
    if(number_who_voted1>=1){
        cout<<"HARD"<<endl;
    }else{
        cout<<"EASY"<<endl;
    }
    return 0;
}
