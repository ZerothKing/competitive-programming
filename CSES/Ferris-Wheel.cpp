/******************* This is ZerothKing *******************/
#include <bits/stdc++.h> 
using namespace std;
 
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define endl "\n"
const double pi=acos(-1.0);
 
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<int,int> mpii;
typedef set<int> seti;
typedef multiset<int> mseti;
 
 
 
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	ll n, m, k;
	cin >> n >> k;
	ll a[n];
	for (auto &x : a) cin >> x;
	sort(a, a+n);
	ll c = 0;
	ll i = 0, j = n-1;
	while(i <= j) {
		if(a[i] + a[j] <= k) {
			c++;
			i++,j--;
		}
		else {
			c++;
			j--;
		}
	}
	cout << c;
}
