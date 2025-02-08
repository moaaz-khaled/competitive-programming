#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define Pass 1999
int main(void)
{
    fast;
    int Password;
    cin >> Password;
    while(Password != Pass){
        cout << "Wrong\n";
        cin >> Password;
    } 
    cout << "Correct\n";
    return 0;
}