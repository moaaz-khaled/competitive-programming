#include<bits/stdc++.h>
using namespace std;
int main() {
    int N1,N2;
    char operation;
    cin >> N1 >> operation >> N2;
    (operation == '+') ? cout << N1+N2 : ((operation == '-') ? cout << N1-N2 :((operation == '*') ? cout << N1*N2 : cout << N1 / N2));
    return 0;
}