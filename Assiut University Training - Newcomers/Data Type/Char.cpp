#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{
    fast;
    char ch;
    cin >> ch;
    if(ch >= 'a' && ch <= 'z')
        ch-=32;
    else
        ch+=32;
    cout << ch;
    return 0;
}