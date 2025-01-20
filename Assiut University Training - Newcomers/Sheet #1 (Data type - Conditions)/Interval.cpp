#include<bits/stdc++.h>
using namespace std;
int main()
{
    double Number;
    cin >> Number;
    (Number >= 0 && Number <= 25) ? cout << "Interval [0,25]" :
    (Number > 25 && Number <= 50) ? cout << "Interval (25,50]" :
    (Number > 50 && Number <= 75) ? cout << "Interval (50,75]" :
    (Number > 75 && Number <= 100) ? cout << "Interval (75,100]" : cout << "Out of Intervals";
    return 0;
}