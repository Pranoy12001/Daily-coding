#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, a, count = 0;
    cin>>n>>k;

    for(int i = 0;i < n; i++)
    {
        cin>>a;
        if(a > 0){
           if(count > k){
               break;
           }else{
               count++;
           }
        }
    }
    cout<<count<<endl;
    return 0;
}
