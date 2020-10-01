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

ll fastexp (ll b, ll pow) {
	int res = 1;
	while(pow) {
		if (pow&1) res = (res * b) % MOD;
		pow /= 2;
		b = (b*b)%MOD;
	}
	return res%MOD;
}
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// ll a[n+1][n+1];
	string s;
	map<char, int> m;
	cin >> s;
	for (auto x : s) {
		m[x]++;
	}
	bool pal = true;
	int ctr = 0;
	char ind;
	if (s.size()&1) {
		for (auto x : m) {
			if (x.S&1) {
				ctr++;
				ind = x.F;
			}
		}
		if (ctr != 1) {
			cout << "NO SOLUTION";
			return 0;
		}
		for (auto x : m) {
			if (x.F == ind) continue;
			for (int i = 0; i < x.S/2; i++) {
				cout << x.F;
			}
		}
		for (int i = 0; i < m[ind]; i++) cout << ind;

		for (auto it = m.rbegin(); it != m.rend(); it++) {
			if (it->F == ind) continue;
			for (int i = 0; i < it->second/2; i++) {
				cout << it->F;
			}
		}
	}
	else {
		for (auto x : m) {
			if (x.S&1) {
				pal = false;
				break;
			}
		}
		if (!pal) {
			cout << "NO SOLUTION";
			return 0;
		}	

		for (auto x : m) {
			for (int i = 0; i < x.S/2; i++) {
				cout << x.F;
			}
		}
		for (auto it = m.rbegin(); it != m.rend(); it++) {
			for (int i = 0; i < (it->S)/2; i++) {
				cout << it->F;
			}
		}
	}
}
