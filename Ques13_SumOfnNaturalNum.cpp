#include <bits/stdc++.h>
using namespace std;
int SumN(int start,int end)
{
    // Formula
    // AP sum=(n/2){2a+(n-1)d}
    int n=end-start+1;
    int sum = (n/2)*(2*start + (n-1));
    return sum;
}
int main()
{
    int start,end;
    cout << "Enter The Range " << endl;
    cin >> start>>end;
    cout << "Sum of Digits is "<<SumN(start,end)<< endl;
    return 0;
}