/*
    Alhamdulillah For Everything
    Author --> Md. Akhlakul Islam
    Date --> 08/02/2024 
*/ 
 
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
    optimize();
    ll n;
    cin>>n;
    ll f=0;
    ll a[n];
    for(int i=0;i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=1; i<=n; i++){
       if(i==a[i-1]){
        continue;
       }
       else{
        f = i;
        break;
       }
        
    }
    cout<<f<<endl;

    return 0;
}