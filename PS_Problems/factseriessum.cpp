#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum=0;
    int fact=1;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
        sum=sum+fact;
    }
    cout<<sum;
}