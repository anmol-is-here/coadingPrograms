#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int p = 0;
    int q = n - 1;
    while (p != q)
    {
        if(arr[p]>arr[q]){
            p++;
        }
        else{
            q--;
        }
    }
    cout<<p;
    return 0;
}