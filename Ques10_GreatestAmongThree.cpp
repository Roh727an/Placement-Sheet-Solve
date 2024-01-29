#include <bits/stdc++.h>
using namespace std;
int main()
{
double a,b,c;
cout<<"Enter Three Numbers "<<endl;
cin>>a>>b>>c;
if(a>b && a>c)
cout<<"Greatest Number is "<<a<<endl;
else if(b>a && b>c)
cout<<"Greatest Number is "<<b<<endl;
else 
cout<<"Greatest Number is "<<c<<endl;
return 0;
}