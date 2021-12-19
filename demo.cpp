/*
Team Name: Coding Warriors

team Leader:Kashfi uddin
team member2: Avijit Chowdhury
team member3: Shakiruzzaman
*/

#include<bits/stdc++.h>
using namespace std;

void solve(){
int n ,k,sum=0;
cin>>n>>k;
int count=0;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
for(int i=1 ;i<= k;i++){
    a[n-1]+=a[n-1-i];
}
cout<<a[n-1];



}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}