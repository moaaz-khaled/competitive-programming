#include<bits/stdc++.h>
using namespace std;

void sort(int Num1 , int Num2 , int Num3)
{
    (Num1 <= Num2 && Num2 <= Num3) ? cout << Num1 << "\n" << Num2 << "\n" << Num3 << "\n\n" :
    (Num1 <= Num3 && Num3 <= Num2) ? cout << Num1 << "\n" << Num3 << "\n" << Num2 << "\n\n" :
    (Num2 <= Num1 && Num1 <= Num3) ? cout << Num2 << "\n" << Num1 << "\n" << Num3 << "\n\n" :
    (Num2 <= Num3 && Num3 <= Num1) ? cout << Num2 << "\n" << Num3 << "\n" << Num1 << "\n\n" :
    (Num3 <= Num1 && Num1 <= Num2) ? cout << Num3 << "\n" << Num1 << "\n" << Num2 << "\n\n" :
    (Num3 <= Num2 && Num2 <= Num1) ? cout << Num3 << "\n" << Num2 << "\n" << Num1 << "\n\n" : cout << "By moaz";
}
int main()
{
    int Num1 , Num2 , Num3;
    cin >> Num1 >> Num2 >> Num3;
    sort(Num1,Num2,Num3);
    cout << Num1 << "\n" << Num2 << "\n" << Num3;
    return 0;
}