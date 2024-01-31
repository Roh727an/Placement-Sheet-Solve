#include <bits/stdc++.h>
using namespace std;
/*
Input Format: N = 6
Result:
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1
*/
void patternPrint(int n)
{
    for(int row=n-1;row>=0;row--)
    {
        for(int star=0;star<=row;star++)
        {
            cout<<star+1<<" ";
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