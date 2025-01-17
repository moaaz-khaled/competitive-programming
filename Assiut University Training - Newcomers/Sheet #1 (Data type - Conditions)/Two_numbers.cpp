#include<bits/stdc++.h>
using namespace std;
int main()
{
    double Num1 , Num2;
    cin >> Num1 >> Num2;
    cout << "floor " << Num1 << " / " << Num2 << " = " << floor(Num1/Num2) << endl;
    cout << "ceil " << Num1 << " / " << Num2 << " = " << ceil(Num1/Num2) << endl;
    cout << "round " << Num1 << " / " << Num2 << " = " << round(Num1/Num2) << endl;
    return 0;
}