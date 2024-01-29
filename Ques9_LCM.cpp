#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    return a;

    return gcd(b,a%b);
}
int main()
{
    int a,b;
    cout<<"Enter Two Numbers "<<endl;
    cin>>a>>b;
    int lcm,Gcd;
    if(a>b)
    {
    lcm=(a/gcd(a,b))*b;
    Gcd=gcd(a,b);
    }
    else
    {
    lcm=(b/gcd(b,a))*a;
    Gcd=gcd(b,a);
    }
    cout<<"LCM is "<<lcm<<endl;
    cout<<"GCD is "<<Gcd<<endl;
    return 0;
}