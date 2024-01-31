#include <bits/stdc++.h>
using namespace std;
/*
Input Format: N = 6
Result:
* * * * * *
* * * * * 
* * * * 
* * * 
* * 
* 
*/
void patternPrint(int n)
{
    for(int row=n-1;row>=0;row--)
    {
        for(int star=0;star<=row;star++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main()
{
int n;
cout<<"Enter the value of n ";
cin>>n;
cout<<endl;
patternPrint(n);
return 0;
}