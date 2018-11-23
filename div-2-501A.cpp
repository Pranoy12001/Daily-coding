#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    float equ1 = max(((3*a)/10), (a-((a*c)/250)));
    float equ2 = max(((3*b)/10), (b-((b*d)/250)));

    if(equ1 > equ2){
        cout<<"Misha"<<endl;
    }else if(equ1 < equ2){
        cout<<"Vasya"<<endl;
    }else{
        cout<<"Tie"<<endl;
    }

    return 0;
}
