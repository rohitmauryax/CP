#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define fi(n)           for(int i=0;i<(int)n;i++)
#define fk(n)           for(int k=0;k<(int)n;k++)
#define fj(n)           for(int j=0;j<(int)n;j++)
#define all(x)          x.begin(), x.end()
#define pii             pair<int,int>
#define vi              vector<int>
#define yes             cout << "YES" << ln
#define no              cout << "NO" << ln
#define vvi             vector<vi>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define inf             LLONG_MAX
#define deb(x)          cout << #x << "=" << x << '\n';
#define ps(x,y)         fixed<<setprecision(y)<<x
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ar              array
#define debexe          cout << "Executed" << ln
// typedef tree<pii, null_type, less<pii>, rb_tree_tag, tree_order_statistics_node_update> ordered_set_pair; 
// typedef tree<pii, null_type, greater<pii>, rb_tree_tag, tree_order_statistics_node_update> ordered_set_pair_g;
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
// find_by_order(x) : return iterator to the number x in log n time
// order_of_key(k) : It returns to the number of items that are strictly smaller than our item k in O(logn) time.
int ceil_div(int a, int b) {return a % b == 0 ? a / b : a / b + 1;}
const char ln='\n';
const char sp=' ';
const int mod=1000000007;
void vout(vi arr){fi(arr.size()) {cout << arr[i] << sp;} cout <<ln;}
void matout(vvi arr){fi(arr.size()){fj(arr[0].size()){cout << arr[i][j] << sp;}cout << ln;}}
int modAdd(int a,int b, int p) {return ((a%p + b%p)%p);}
int modpow(int x, int y, int p);
int modinv(int a, int m);
int lcm(int a, int b);
int gcd(int a, int b);
int modFact(int n, int p);     
string decToBinary(int n);
bool po2 (int x);
struct comp;

void solve(){
"Welcome Rohit"
}

int32_t main() {
    FIO;
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
 
int modFact(int n, int p)
{
    if (n >= p)
        return 0;
 
    int result = 1;
    for (int i = 1; i <= n; i++)
        result = (result * i) % p;
 
    return result;
}
 
string decToBinary(int n)
{
    string s = "";
    for (int i = 36; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            s+="1";
        else
            s+="0";
    }
    return s;
}
 
int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}
 
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
 
bool po2(int x) {
    return x && (!(x&(x-1)));
}
 
int modpow(int x, int y, int p) {
    int res = 1;
    x = x % p;
    if (x == 0) return 0;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
 
int modinv(int a, int m) {
    int g = gcd(a, m);
    if (g != 1)
        return -1;
    else {
        return modpow(a, m - 2, m);
    }
}
 
struct comp {
    bool operator()(pii const& p1, pii const& p2) {
        if(p1.first>p2.first) return true;
        else if(p1.first<p2.first) return false;
        else return p1.second>p2.second;
    }
};
// IMPORTANT:
// 1. Never use upper_bound(all(s),ele) on a set , instead use s.upper_bound(a)
// 2. Use pair or tuple(array<int,x>) to change a set into multiset.
// 3. Always check for overflow of numbers while applying binary search
//    (you can do that by taking the min possible value of high for the current case,
//          always try this when applying BS and getting WA).
// 4. While applying B.S. if high contains the ans then mid = lo+(hi-lo)/2 else mid = lo+(hi-lo)/2