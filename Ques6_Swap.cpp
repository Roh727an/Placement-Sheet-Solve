#include <bits/stdc++.h>
using namespace std;
int main()
{
int num1,num2;
cout<<"Enter two Numbers"<<endl;
cin>>num1>>num2;
cout<<"Before Swapping, Numbers are "<<num1<<" "<<num2<<endl;
// Arithmatic Operators
/*
num1=num1+num2;
num2=num1-num2;
num1=num1-num2;
*/
// Bitwise Operator
num1=num1^num2;
num2=num1^num2;
num1=num1^num2;

cout<<"After Swapping, Numbers are "<<num1<<" "<<num2<<endl;
return 0;
}