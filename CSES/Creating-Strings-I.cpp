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
 
int f (int n) {
	if (n == 1) return 1;
	else return n*f(n-1);
}
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s;
    cin >> s;
    map <char, int> m;
    for (auto x : s) {
    	m[x]++;
    }
    int ans = f(s.size());
    for (auto x : m) {
    	ans/=f(x.S);
    }
    cout << ans << endl;
    sort(s.begin(), s.end());
    int n = s.size();
    do {
    	cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));
}
