#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    // INPUT
    cout<<"Enter the Character"<<endl;
    cin>>ch;
    // if the Given Character is Alphabet then- 
    if(ch<='z' && ch>='a' || ch <='Z' && ch>='A')
    {
        //  Vowel Check
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' ||ch=='I' || ch=='O' || ch=='U')
        cout<<" Character is Vowel"<<endl;
        // Consonent
        else
        cout<<" Character is Consonent"<<endl;
    }
    // Charcter is not alphabet
    else
    cout<<"Character is neither consonent not Vowel"<<endl;

    return 0;
}