#include<bits/stdc++.h>
using namespace std;
int main() {
    char c;
    cin >> c;
    (islower(c) ? cout << (char)toupper(c) : cout << (char)tolower(c));
    return 0;
}