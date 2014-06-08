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










class TheLuckyString {
	public:
	int check(string s)
	{
			for(int i=0;i<(int)s.length()-1;i++)
				if(s[i]==s[i+1])
						return 0;
			return 1;
		}
	int count(string s) 
	{
		int ret=0;
		sort(s.begin(),s.end());
		do{
			if(check(s))
					ret++;
			}while(next_permutation(s.begin(),s.end()))	;
		return ret;			
		
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
		cout << "Testing TheLuckyString (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1402240273;
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
		TheLuckyString _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string s = "ab";
				_expected = 2;
				_received = _obj.count(s); break;
			}
			case 1:
			{
				string s = "aaab";
				_expected = 0;
				_received = _obj.count(s); break;
			}
			case 2:
			{
				string s = "aabbbaa";
				_expected = 1;
				_received = _obj.count(s); break;
			}
			case 3:
			{
				string s = "abcdefghij";
				_expected = 3628800;
				_received = _obj.count(s); break;
			}
			/*case 4:
			{
				string s = ;
				_expected = ;
				_received = _obj.count(s); break;
			}*/
			/*case 5:
			{
				string s = ;
				_expected = ;
				_received = _obj.count(s); break;
			}*/
			/*case 6:
			{
				string s = ;
				_expected = ;
				_received = _obj.count(s); break;
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
