/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n=0,x=0;
    cin>>n>>x;

    int coins[n];

    for(int i=0 ; i<n ; i++){
        cin>>coins[i];
    }

    long long value[x+1];

    value[0]=0;

    for(int i=1;i<=x;i++){
        value[i] = INT_MAX;

        for (auto c : coins){
            if (i-c >=0){
                value[i] = min(value[i] , value[i-c]+1);
            }
        }
    }

    cout<<((value[x]==INT_MAX)?-1:value[x])<<"\n";

    return 0;
}
