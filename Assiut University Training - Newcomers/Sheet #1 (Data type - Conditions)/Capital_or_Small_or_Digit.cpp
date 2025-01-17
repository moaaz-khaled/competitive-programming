#include<bits/stdc++.h>
using namespace std;
int main() {
    char c;
    cin >> c;
    (c >= 48 && c <= 57) ? cout << "IS DIGIT" : (c >= 65 && c <= 90 ? cout << "ALPHA\nIS CAPITAL" : cout << "ALPHA\nIS SMALL");
    return 0;
}