#include <bits/stdc++.h>
using namespace std;
/*
Input Format: N = 6
Result:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
*/
void patternPrint(int n)
{
    for(int row=0;row<n;row++)
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