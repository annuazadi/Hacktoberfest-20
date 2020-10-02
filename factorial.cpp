#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll lcm(ll a, ll b)
{
	return (a *b) / __gcd(a, b);
}

ll gcd(ll a, ll b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}

bool isPrime(int n)
{
	if (n <= 1) return false;
	if (n <= 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	for (int i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0) return false;
	return true;
}

ll fact(ll n)
{
	if (n <= 1) return 1;
	return n* fact(n - 1);
}

ll nPr(ll n, ll r)
{
	return fact(n) / fact(n - r);
}

ll nCr(ll n, ll r)
{
	return fact(n) / (fact(r) *fact(n - r));
}

void leftrotate(string s, ll d)
{
	reverse(s.begin(), s.begin() + d);
	reverse(s.begin() + d, s.end());
	reverse(s.begin(), s.end());
}

void rightrotate(string s, ll d)
{
	leftrotate(s, s.length() - d);
}

ll maxSubArraySum(vector<ll> &a, ll size)
{
	ll max_so_far = INT_MIN, max_ending_here = 0;
	for (long long i = 0; i < size; i++)
	{
		max_ending_here = max(max_ending_here + a[i], a[i]);
		max_so_far = max(max_so_far, max_ending_here);
	}

	return max_so_far;
}

void pre(){

}


#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define MOD 1000000007
#define Max 1e9
#define Min - 1e9
#define fr(i, z, n) for (int i = z; i < n; i++)
#define fr1(i, z, n) for (int i = z; i <= n; i++)
#define repr(i, n) for (int i = n - 1; i >= 0; i--)
#define pb push_back
#define mp make_pair
#define all(a) a.begin(), a.end()
#define vl vector<ll>
#define vll vector<vl>
#define vs vector<string>
#define pl pair<ll, ll>
#define vpl vector<pl>
#define f first
#define s second

ll fact()
{
    if(n==0 || n==1)
        return 1;
    return n*fact(n-1);
}

void solve()
{
    ll n;			// enter a number.
    cin>>n;
    cout<<fact(n)<<endl;	// factorial of a number by using function call

}


int main()
{
	fast;
	ll t;
	cin >> t;
	while (t--)
	{
		solve();
	}
}
