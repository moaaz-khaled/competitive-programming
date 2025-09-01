#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

void Sort(int Num1 ,int Num2 , int Num3)
{
    int Min , Mid , Max;
    if(Num1 >= Num2 && Num1 >= Num3) {
        Max = Num1;
        if(Num2 >= Num3){
            Mid = Num2;
            Min = Num3;
        }
        else {
            Mid = Num3;
            Min = Num2;
        }
    }

    else if(Num2 >= Num1 && Num2 >= Num3) {
        Max = Num2;
        if(Num1 >= Num3){
            Mid = Num1;
            Min = Num3;
        }
        else {
            Mid = Num3;
            Min = Num1;
        }
    }

    else if(Num3 >= Num1 && Num3 >= Num2) {
        Max = Num3;
        if(Num1 >= Num2){
            Mid = Num1;
            Min = Num2;
        }
        else {
            Mid = Num2;
            Min = Num1;
        }
    }
    cout << Min << endl << Mid << endl << Max << endl << endl;
}

int main(void)
{
    fast;
    int Num1 , Num2 , Num3;
    cin >> Num1 >> Num2 >> Num3;
    Sort(Num1 , Num2 , Num3);
    cout << Num1 << endl << Num2 << endl << Num3;
    return 0;
}