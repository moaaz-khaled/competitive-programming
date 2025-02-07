#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long int Num1 , Num2 , K;
    cin >> Num1 >> Num2 >> K;
    if(Num1 % K == 0 && Num2 % K != 0)
        cout << "Memo";
    else if(Num1 % K != 0 && Num2 % K == 0)
        cout << "Momo";
    else if(Num1 % K == 0 && Num2 % K == 0)
        cout << "Both";
    else
        cout << "No One";
    return 0;
}