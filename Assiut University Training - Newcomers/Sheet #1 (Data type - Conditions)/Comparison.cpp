#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Num1 , Num2;
    char c;
    cin >> Num1 >> c >> Num2;
    if(c == '=')
    {
        if(Num1 == Num2)
            cout << "Right";
        else
            cout << "Wrong";
    }
    else if(c == '>')
    {
        if(Num1 > Num2)
            cout << "Right";
        else
            cout << "Wrong";
    }
    else if(c == '<')
    {
        if(Num1 < Num2)
            cout << "Right";
        else
            cout << "Wrong";
    }
    return 0;
}