#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll eyes , mouths , body , counter = 0;
    cin >> eyes >> mouths >> body ;
    if(min(eyes,min(body,mouths)) == eyes)
    {
        cout << eyes;
        return 0;
    }
    if(mouths > 0)
    {
        eyes-=mouths;
        body-=mouths;
        counter+=mouths;
        mouths-=mouths;
    }
    if(body >= eyes/2)
        counter+=(eyes/2);
    else
        counter+=body;
    cout << counter;
    return 0;
}