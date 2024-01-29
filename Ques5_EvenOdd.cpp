#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a Number"<<endl;
    cin>>num;
    // Logical Operator
    if(num%2==0)
    cout<<"Given Number is Even"<<endl;
    else
    cout<<"Given Number is Odd"<<endl;

    // Bitwise Or (|)Operator
    if((num|1) > num)
    cout<<"Given Number is Even"<<endl;
    else
    cout<<"Given Number is Odd"<<endl;

return 0;
}