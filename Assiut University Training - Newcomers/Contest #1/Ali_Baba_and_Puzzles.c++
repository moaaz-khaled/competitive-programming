#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll a , b , c , d;
    cin >> a >> b >> c >> d;
    if(a + b - c == d)
        cout << "YES";
    else if(a + b * c == d)
        cout << "YES";
    else if(a - b + c == d)
        cout << "YES";
    else if(a - b * c == d)
        cout << "YES";
    else if(a * b - c == d)
        cout << "YES";
    else if(a * b + c == d)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
