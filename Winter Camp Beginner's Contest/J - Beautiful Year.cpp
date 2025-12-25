#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cin>>year;
    int i=year+1;
    while(true){   //the loop will be running unless we find a beautiful year that "breaks" the loop
        int x1=i%10, x2=(i/10)%10, x3=(i/100)%10, x4=(i/1000);
        if(x1!=x2 && x1!=x3 && x1!=x4 && x2!=x3 && x2!=x4 && x3!=x4){
            cout<<i<<endl;
            break;
        }
        i++;
    }
    return 0;
}
