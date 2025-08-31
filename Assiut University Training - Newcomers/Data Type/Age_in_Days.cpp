#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{
    fast;
    int Num , Years , Months , Days;
    cin >> Num;
    Years = Num / 365;
    Months = (Num % 365) / 30;
    Days = ((Num % 365) % 30);
    cout << Years << " years\n";
    cout << Months << " months\n";
    cout << Days << " days";
    return 0;
}