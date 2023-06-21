#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector <ll> vll;
typedef vector <vll> vvll;
typedef vector<int> vi;
// int dp[1010][100010];
// int solve(vi& a,vector<vi>& v,int i,int tsum ){
//     if(dp[i][tsum]!=-1)return dp[i][tsum];
//     if(!i)return dp[i][tsum]=0;
//     if(tsum==0)return dp[i][tsum]=0;
//     if(tsum<0)return 0;
//     if (v[tsum][i]&&!v[tsum][i-1]){
//         cout<<a[i-1]<<" ";
//         solve(a,v,i-1,tsum-a[i-1]);
//         return dp[i][tsum]=1;
//     }
//     else if((v[tsum][i]&&v[tsum][i-1])){
//         return solve(a,v,i-1,tsum);
//     }
//     return dp[i][tsum]=0;
// }

int main() {
ios::sync_with_stdio(0);//use only when not using c stdio files.
cin.tie(0);//unties input and output streams.

// memset(dp,-1,sizeof(dp));
int n;cin>>n;int m; cin>>m;
vi a(n,0);int sum=0;
for(int i=0;i<n;i++){cin>>a[i];sum+=a[i];}

vi k(n+1,0);
vector<vi> v(sum+1,k);

v[0][0]=1;
for(int j=1;j<=n;j++){
    for(int i=0;i<=sum;i++){        
        if(!v[i][j-1])continue;
        v[i][j]=1;
        if(i+a[j-1]<=sum)v[i+a[j-1]][j]=1;
    }
}
int f=0;
if(sum%(m+1))cout<<"invalid";
else{
    if(v[sum/(m+1)][n]){cout<<"valid\n";f=1;}
    else cout<<"invalid";
}

// if(f){
//     int i=n;
//     int tsum=sum/(m+1);
//    solve(a,v,n,sum/(m+1));
    
// }


return 0;
}