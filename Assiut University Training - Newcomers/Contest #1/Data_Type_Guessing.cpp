#include <bits/stdc++.h>
using namespace std;
int main()
{
    long double N , K , A;
    cin >> N >> K >> A;
    long double result = N * (K/A);
    long long MyNumber = result;
    long double MyResult = result - MyNumber;
    (MyResult > 0) ? cout << "double" : ((MyNumber <= 2147483647) ? cout << "int" : cout << "long long");
    return 0;
}
