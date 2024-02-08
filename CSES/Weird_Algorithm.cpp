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
    cout<<n<<" ";
    while(n!=1){
        
        if(n%2==0){
            n=n/2;
            cout<<n<<" ";
        }
        else{
            n = (n*3)+1;
            cout<<n<<" ";
        }
    }

    return 0;
}