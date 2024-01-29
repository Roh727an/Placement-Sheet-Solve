#include <bits/stdc++.h>
using namespace std;
int main()
{
int num1,num2;
cout<<"Enter two Numbers"<<endl;
cin>>num1>>num2;
cout<<"Numbers are "<<num1<<" "<<num2<<endl;

// STL
int greatest=max(num1,num2);
int greatest2=num1;
if(num2>num1)
greatest2=num2;
if(num2==num1)
cout<<"Both the Numbers are Equal"<<endl;
else
cout<<"Greatest among "<<num1<<" & "<<num2<<" is STL "<<greatest<<" & Logical "<<greatest2<<endl;
return 0;
}