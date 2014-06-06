#include<bits/stdc++.h>


#define FOR(i,a,b) for(int i=a;i<b;i++)
#define LOOP(i,a) FOR(i,0,a)

#define SET(p) memset(p, -1, sizeof(p))
#define CLR(p) memset(p, 0, sizeof(p))
#define BIG(p) memset(p, 0x3f, sizeof(p))

#define ll unsigned long long
#define oo (1000000000+7)

/*

#define DEBUG
#ifdef DEBUG
#define deb(args...) {dbg,args; cerr<<endl;}
#else
#define deb(args...) // Just strip off all debug tokens
#endif
struct debugger
{
template<typename T> debugger& operator , (const T& v)
{
std::cerr<<v<<" ";
return *this;
}
} dbg;

*/
/*
template< class T > T abst(const T &n) { return (n < 0 ? -n : n); }
template< class T > T max3(const T &a, const T &b, const T &c) { return max2(a, max2(b, c)); }
template< class T > T min3(const T &a, const T &b, const T &c) { return min2(a, min2(b, c)); }
template< class T > T gcd(const T a, const T b) { return (b ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(const T a, const T b) { return (a / gcd<T>(a, b) * b); }
template< class T > T sq(const T &x) { return x * x; }
*/
using namespace std;










class TheTower {
	public:
	vector<int> dp[55];
	vector <int> count(vector <int> x, vector <int> y) 
	{
		
		int n=x.size();
		vector<int> res(n,999999999);
		
		int distance[n];
		for(int i=0;i<=n;i++)
				distance[i]=999999999;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
			{
				for(int k=0;k<n;k++)
						distance[k]=abs(x[i]-x[k])+abs(y[j]-y[k]);
				sort(distance,distance+n);
				int sum=0;
				for(int k=0;k<n;k++)
				{
					sum+=distance[k];
					res[k]=min(res[k],sum);
				}								
			}					
		return res;		
	}
};
// BEGIN CUT HERE
#include <ctime>
#include <cmath>
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[])
{
	if (argc == 1) 
	{
		cout << "Testing TheTower (600.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1402029766;
		double PT = T/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl;
		cout << "Time  : " << T/60 << " minutes " << T%60 << " secs" << endl;
		cout << "Score : " << 600.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points" << endl;
	}
	else
	{
		int _tc; istringstream(argv[1]) >> _tc;
		TheTower _obj;
		vector <int> _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int x[] = {1, 2, 4, 9};
				int y[] = {1, 1, 1, 1};
				int __expected[] = {0, 1, 3, 10 };
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.count(vector <int>(x, x+sizeof(x)/sizeof(int)), vector <int>(y, y+sizeof(y)/sizeof(int))); break;
			}
			case 1:
			{
				int x[] = {15, 15, 14, 16};
				int y[] = {14, 16, 15, 15};
				int __expected[] = {0, 2, 3, 4 };
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.count(vector <int>(x, x+sizeof(x)/sizeof(int)), vector <int>(y, y+sizeof(y)/sizeof(int))); break;
			}
			case 2:
			{
				int x[] = {4, 4};
				int y[] = {7, 7};
				int __expected[] = {0, 0 };
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.count(vector <int>(x, x+sizeof(x)/sizeof(int)), vector <int>(y, y+sizeof(y)/sizeof(int))); break;
			}
			/*case 3:
			{
				int x[] = ;
				int y[] = ;
				int __expected[] = ;
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.count(vector <int>(x, x+sizeof(x)/sizeof(int)), vector <int>(y, y+sizeof(y)/sizeof(int))); break;
			}*/
			/*case 4:
			{
				int x[] = ;
				int y[] = ;
				int __expected[] = ;
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.count(vector <int>(x, x+sizeof(x)/sizeof(int)), vector <int>(y, y+sizeof(y)/sizeof(int))); break;
			}*/
			/*case 5:
			{
				int x[] = ;
				int y[] = ;
				int __expected[] = ;
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.count(vector <int>(x, x+sizeof(x)/sizeof(int)), vector <int>(y, y+sizeof(y)/sizeof(int))); break;
			}*/
			default: return 0;
		}
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		double _elapsed = (double)(clock()-_start)/CLOCKS_PER_SEC;
		if (_received == _expected)
			cout << "#" << _tc << ": Passed (" << _elapsed << " secs)" << endl;
		else
		{
			cout << "#" << _tc << ": Failed (" << _elapsed << " secs)" << endl;
			cout << "           Expected: {";
			for (unsigned i = 0; i < _expected.size(); i++)
			{
				if (i) cout << ",";
				cout << " " << _expected[i];
			}
			cout << " }" << endl;
			cout << "           Received: {";
			for (unsigned i = 0; i < _received.size(); i++)
			{
				if (i) cout << ",";
				cout << " " << _received[i];
			}
			cout << " }" << endl;
		}
	}
}

// END CUT HERE
