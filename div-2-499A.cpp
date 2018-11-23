#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, s, t1, t2, time = 0, t = 0;
    cin>>n>>s;
    for(int i = 0; i < n; i++)
    {
        cin>>t1>>t2;
        int sum = 0;
        while(1){
          t = t+s;
          if(t >= t1){
            t = t - s;
            sum = sum + (t2 - t);
            t = t + sum;
            break;
          }
        }
        time += sum;
    }
    cout<<time<<endl;
    return 0;
}
