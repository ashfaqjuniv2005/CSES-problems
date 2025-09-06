#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define optimize ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define vi vector<int>
#define testcases int t; cin>>t;while(t--)
#define infintetestcase ll t; cin>>t;while(t--)
#define vb vector<bool>
#define pgend return 0
#define YES cout<<"YES"<<"\n"
#define NO cout<<"No"<<"\n"
#define fr(i,n) for(int i=0;i<n;i++)
 
int main(){
  optimize;
ll n,t;
cin>>n>>t;
vi arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
ll low=0,high=2e18;
while(low<high){
    ll mid=(high+low)/2;
    ll product=0;
    for(int i=0;i<n;i++){
        product+=(mid/arr[i]);
        if(product>t) break;
    }
    if(product>=t){
        high=mid;
    }
    else{
        low=mid+1;
    }
}
cout<<low<<"\n";
  pgend;
 
}
