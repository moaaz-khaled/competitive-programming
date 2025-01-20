#include <bits/stdc++.h>
using namespace std;
int main()  {
    long double A , B , C , D;
    cin >> A >> B >> C >> D;
    (A > pow(C,D/B)) ? cout << "YES" : cout << "NO";
    return 0;
}