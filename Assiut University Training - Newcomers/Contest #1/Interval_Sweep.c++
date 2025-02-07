#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A , B;
    cin >> A >> B;
    ((abs(A-B) > 1) || (A == 0 && B == 0)) ? cout << "NO" : cout << "YES";
    return 0;
}
