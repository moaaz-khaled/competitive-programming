#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Num1 , Num2 , result;
    char operation , Equal;
    cin >> Num1 >> operation >> Num2 >> Equal >> result;
    if(operation == '+') {
        if(Num1 + Num2 == result)
            cout << "Yes";
        else
            cout << Num1 + Num2; 
    }
    else if(operation == '-') {
        if(Num1 - Num2 == result)
            cout << "Yes";
        else
            cout << Num1 - Num2;
    }
    else if(operation == '*') {
        if(Num1 * Num2 == result)
            cout << "Yes";
        else
            cout << Num1 * Num2;
    }
    return 0;
}