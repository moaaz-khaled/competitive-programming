#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Num1 , Num2 , Num3 , Num4;
    cin >> Num1 >> Num2 >> Num3 >> Num4;
    int Result = ((Num1%100)*(Num2%100)*(Num3%100)*(Num4%100)) % 100;
    (Result > 10) ? cout << Result : cout << "0" << Result;
    return 0;
}