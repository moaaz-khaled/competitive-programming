#include <bits/stdc++.h>
using namespace std;
int main()
{
    double  Num;
    cin >> Num;
    (Num - int(Num) == 0) ? cout << "int " << int(Num) : cout << "float " << int(Num) << " " << Num - int(Num);
}