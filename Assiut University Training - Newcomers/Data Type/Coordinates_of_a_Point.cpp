#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{
    fast;
    float Num1 , Num2;
    cin >> Num1 >> Num2;
    if(Num1 == 0 && Num2 == 0)
        cout << "Origem";
    else if(Num2 == 0)
        cout << "Eixo X";
    else if(Num1 == 0)
        cout << "Eixo Y";
    else if(Num1 > 0 && Num2 > 0)
        cout << "Q1";
    else if(Num1 < 0 && Num2 > 0)
        cout << "Q2";
    else if(Num1 < 0 && Num2 < 0)
        cout << "Q3";
    else if(Num1 > 0 && Num2 < 0)
        cout << "Q4";
    return 0;
}