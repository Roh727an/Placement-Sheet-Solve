#include <bits/stdc++.h>
using namespace std;
int SumDig(int a)
{
    int sum = 0;
    while (a > 0)
    {
        sum+=(a%10);
        a = a / 10;
    }
    return sum;
}
int main()
{
    int num;
    cout << "Enter The Number " << endl;
    cin >> num;
    cout << "Sum of Digits is "<<SumDig(num)<< endl;
    return 0;
}