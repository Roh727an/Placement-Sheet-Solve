#include <bits/stdc++.h>
using namespace std;
/*
n=6
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
*/
void patternPrint(int n)
{
    for(int row=0;row<n;row++)
    {
        for(int star=0;star<n;star++)
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