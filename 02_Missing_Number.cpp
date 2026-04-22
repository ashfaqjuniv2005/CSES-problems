// Problem Link= https://cses.fi/problemset/task/1083/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define fo(i,n) for(int i=0;i<n;i++)
#define fo1(i,n) for(int i=1;i<=n;i++)
#define fo2(i,a,b) for(int i=a;i<b;i++)
#define fo3(i,a,b) for(int i=a;i<=b;i++)
#define vi vector<int>
#define vll vector<long long>
#define tt int t;cin>>t;while(t--)
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ppb pop_back
#define mii map<int,int>
#define mll map<long long,long long>   
#define empb emplace_back
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>  
 
 
int main () {
 
    fio
    ll n;
    cin>>n;
    ll sum=0;
    fo2(i,1,n){
        int a;
        cin>>a;
        sum+=a;
    }
    cout<<n*(n+1)/2-sum;
  
    
    return 0;
}
