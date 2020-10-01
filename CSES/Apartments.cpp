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

	int n, m, k;
	cin >> n >> m >> k;
	vi a(n), b(m);
	for (auto &x : a) cin >> x;
	for (auto &x : b) cin >> x;
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	// for (auto x :a) cout << x << endl;
	int ctr = 0;
	int i = 0, j = 0;
	while(i < n && j < m) {
		if (abs(a[i]-b[j]) <= k) {
			i++;
			j++;
			ctr++;
			// cout << b[j] << endl;
		}
		else if (a[i] > b[j]+k) {
			j++;
		}
		else {
			i++;
		}
	}
	cout << ctr;
}

