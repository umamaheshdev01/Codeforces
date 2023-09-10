#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{

    int participants, max, secondMax;
    cin>>participants;
    int list[participants];
    int copy[participants];

    for(int i = 0; i < participants; i++)
    {
        cin>>list[i];
    }
    
    for (int i = 0; i < participants; i++)
    {
        copy[i] = list[i];
    }
    
    sort(copy, copy+participants);

    secondMax = copy[participants-2];
    max = *max_element(list, list+participants);



    int Advantage[participants];

    for(int i = 0; i < participants; i++)
    {
        if(list[i] != max)
        {
            Advantage[i] = list[i] - max;
        }
        else if(list[i] == max) 
        {
            Advantage[i] = max - secondMax;
        }
    }

    for(int i = 0; i < participants; i++)
    {
        cout<<Advantage[i]<<" ";
    }
}

int main()
{
    ll n;
    cin>>n;

    while(n--)
    {
        solve();
    }
}