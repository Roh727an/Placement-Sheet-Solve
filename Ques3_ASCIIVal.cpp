#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the Character "<<endl;
    cin>>ch;
    // Explicit Type casting int(x)
    cout<<"ASCII VALUE of character "<<ch<<" is "<<int(ch)<<endl;
    // Implicit Type Casting
    cout<<"ASCII VALUE of character "<<ch<<" is "<<ch+0<<endl;
    return 0;
}