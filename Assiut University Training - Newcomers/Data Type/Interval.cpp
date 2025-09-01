#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{
    fast;
    double Number;
    cin >> Number;
    if(Number >= 0 && Number <= 25)
        cout << "Interval [0,25]";
    else if(Number > 25 && Number <= 50)
        cout << "Interval (25,50]";
    else if(Number > 50 && Number <= 75)
        cout << "Interval (50,75]";
    else if(Number > 75 && Number <= 100)
        cout << "Interval (75,100]";
    else
        cout << "Out of Intervals";
    return 0;
}