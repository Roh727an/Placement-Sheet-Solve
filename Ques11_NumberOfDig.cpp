#include <bits/stdc++.h>
using namespace std;
int NumDig(int a)
{
    int dig = 0;
    while (a > 0)
    {
        a = a / 10;
        dig++;
    }
    return dig;
}
int main()
{
    int num;
    cout << "Enter The Number " << endl;
    cin >> num;
    cout << "Number of Digits is "<<NumDig(num)<< endl;
    return 0;
}