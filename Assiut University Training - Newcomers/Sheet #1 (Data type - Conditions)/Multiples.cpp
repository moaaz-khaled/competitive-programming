#include<bits/stdc++.h>
using namespace std;
int main() {
    int Num1,Num2;
    cin >> Num1 >> Num2;
    (Num1 % Num2 == 0 || Num2 % Num1 == 0) ? cout << "Multiples\n" : cout << "No Multiples\n";
    return 0;
}
