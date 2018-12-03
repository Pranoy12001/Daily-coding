
#include<bits/stdc++.h>
using namespace std;
int dp[100000];
int n,a,b,c;

int fun(int len){
  if(len == 0)
    return 0;
   if(len < 0)
        return -99999;
    int &ret = dp[len];
    if(ret!=-1)
        return ret;
    ret=-99999;

    ret= max(ret, 1+fun(len-a));
    ret= max(ret, 1+fun(len-b));
    ret= max(ret, 1+fun(len-c));
  return ret;
}
int main(){
cin>>n>>a>>b>>c;
memset(dp,-1,sizeof(dp));
cout<<fun(n)<<endl;
}
