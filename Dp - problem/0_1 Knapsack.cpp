/***   Bismillahir Rahmanir Rahim   ***/

#include<bits/stdc++.h>
using namespace std;

#define     nn          '\n'
#define     ss          second
#define     ff          first
#define     sp(d, n)    fixed << setprecision(d) << n
#define     srt(v)      sort(v.begin(),v.end());
#define     rsrt(v)     sort(v.rbegin(),v.rend());
#define     rev(v)      reverse(v.begin(),v.end());
#define     mem(a, x)   memset(a, x, sizeof a)

using ll =  long long;
using ld =  long double;
using ull = unsigned long long;
const ld pi = acos(-1.0);
template <typename T>
using minHeap = priority_queue<T, vector<T>, greater<T>>;

int dx[6] = {0, 1, -1, 0, 0};
int dy[6] = {0, 0, 0, 1, -1};

const int M = 1e9 + 7;
const int N = 100 + 9;

ll n, W, w[N], v[N], dp[N][1000005];
ll find_ans(int i, ll weight){
    if(i == n + 1)return 0;
    if(dp[i][weight] != -1) return dp[i][weight];

    ll ans = find_ans(i + 1, weight);
    if(weight + w[i] <= W){
       ans = max<ll>(ans, find_ans(i + 1, weight + w[i]) + v[i]);
    }

    dp[i][weight] = ans;

    return ans;
}
void solution(){
    cin >> n >> W;
    memset(dp, -1, sizeof(dp));
    for(int i = 1; i <= n; i++){
       cin >> w[i] >> v[i];
    }

    cout << find_ans(1, 0) << nn;
}
int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int t = 1, c = 1;
    //cin >> t;
    //cin.ignore();
    while(t--){
        //cout << "Case " << c++ << ": ";
        solution();
    }
    return 0;
}