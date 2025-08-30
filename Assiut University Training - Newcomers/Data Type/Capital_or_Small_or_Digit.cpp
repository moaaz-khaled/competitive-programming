#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define pi 3.141592653


int main(void)
{   
    fast;
    char ch;
    cin >> ch;
    if(ch >= 'a' && ch <= 'z')
        cout << "ALPHA" << endl << "IS SMALL";
    else if(ch >= 'A' && ch <= 'Z')
        cout << "ALPHA" << endl << "IS CAPITAL";
    else
        cout << "IS DIGIT";
    return 0;
}