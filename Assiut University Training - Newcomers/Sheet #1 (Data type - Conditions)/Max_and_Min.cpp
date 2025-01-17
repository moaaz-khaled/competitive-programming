#include<bits/stdc++.h>
using namespace std;
int main() {
    int Num1, Num2 , Num3;
    cin >> Num1 >> Num2 >> Num3;
    cout << min(Num1,min(Num2,Num3)) << " ";
    cout << max(Num1,max(Num2,Num3));
    return 0;
}