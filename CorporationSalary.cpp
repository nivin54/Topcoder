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










class CorporationSalary {
	public:
	vector<string> relation;
	long long dp[105];
	long long memo(int u)
	{
			long long &res=dp[u];
			if(res!=-1)
					return dp[u];
			res=0;
			for(int j=0;j<(int)relation[u].length();j++)
				if(relation[u][j]=='Y')
					res+=memo(j);
			if(res==0) res+=1;
			return res;
	}
					
	long long totalSalary(vector <string> relations) 
	{
		relation=relations;
		long long result=0;
		memset(dp,-1,sizeof(dp));
		for(int i=0;i<(int)relations.size();i++)
			result+=memo(i);
		return result;
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
		cout << "Testing CorporationSalary (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1401675636;
		double PT = T/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl;
		cout << "Time  : " << T/60 << " minutes " << T%60 << " secs" << endl;
		cout << "Score : " << 500.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points" << endl;
	}
	else
	{
		int _tc; istringstream(argv[1]) >> _tc;
		CorporationSalary _obj;
		long long _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string relations[] = {"N"};
				_expected = 1LL;
				_received = _obj.totalSalary(vector <string>(relations, relations+sizeof(relations)/sizeof(string))); break;
			}
			case 1:
			{
				string relations[] = {"NNYN",
				                      "NNYN",
				                      "NNNN",
				                      "NYYN"};
				_expected = 5LL;
				_received = _obj.totalSalary(vector <string>(relations, relations+sizeof(relations)/sizeof(string))); break;
			}
			case 2:
			{
				string relations[] = {"NNNNNN",
				                      "YNYNNY",
				                      "YNNNNY",
				                      "NNNNNN",
				                      "YNYNNN",
				                      "YNNYNN"};
				_expected = 17LL;
				_received = _obj.totalSalary(vector <string>(relations, relations+sizeof(relations)/sizeof(string))); break;
			}
			case 3:
			{
				string relations[] = {"NYNNYN",
				                      "NNNNNN",
				                      "NNNNNN",
				                      "NNYNNN",
				                      "NNNNNN",
				                      "NNNYYN"};
				_expected = 8LL;
				_received = _obj.totalSalary(vector <string>(relations, relations+sizeof(relations)/sizeof(string))); break;
			}
			case 4:
			{
				string relations[] = {"NNNN",
				                      "NNNN",
				                      "NNNN",
				                      "NNNN"};
				_expected = 4LL;
				_received = _obj.totalSalary(vector <string>(relations, relations+sizeof(relations)/sizeof(string))); break;
			}
			/*case 5:
			{
				string relations[] = ;
				_expected = LL;
				_received = _obj.totalSalary(vector <string>(relations, relations+sizeof(relations)/sizeof(string))); break;
			}*/
			/*case 6:
			{
				string relations[] = ;
				_expected = LL;
				_received = _obj.totalSalary(vector <string>(relations, relations+sizeof(relations)/sizeof(string))); break;
			}*/
			/*case 7:
			{
				string relations[] = ;
				_expected = LL;
				_received = _obj.totalSalary(vector <string>(relations, relations+sizeof(relations)/sizeof(string))); break;
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
			cout << "           Expected: " << _expected << endl;
			cout << "           Received: " << _received << endl;
		}
	}
}

// END CUT HERE
