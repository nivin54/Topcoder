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










class LampsGrid {
	public:
	
	
	int mostLit(vector <string> initial, int K) 
	{
		
		int row=initial.size(),ma=0;
		for(int i=0;i<row;i++)
		{
			
			int q=count(initial[i].begin(),initial[i].end(),'0');	
			if(q>K or q%2!=K%2)
					continue;
			int aux=count(initial.begin(),initial.end(),initial[i]);
			ma=max(aux,ma);
		}				
		return ma;
		
		
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
		cout << "Testing LampsGrid (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1402317427;
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
		LampsGrid _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string initial[] = {"01",
				                    "10",
				                    "10"};
				int K = 1;
				_expected = 2;
				_received = _obj.mostLit(vector <string>(initial, initial+sizeof(initial)/sizeof(string)), K); break;
			}
			case 1:
			{
				string initial[] = {"101010"};
				int K = 2;
				_expected = 0;
				_received = _obj.mostLit(vector <string>(initial, initial+sizeof(initial)/sizeof(string)), K); break;
			}
			case 2:
			{
				string initial[] = {"00", "11"};
				int K = 999;
				_expected = 0;
				_received = _obj.mostLit(vector <string>(initial, initial+sizeof(initial)/sizeof(string)), K); break;
			}
			case 3:
			{
				string initial[] = {"0", "1", "0", "1", "0"};
				int K = 1000;
				_expected = 2;
				_received = _obj.mostLit(vector <string>(initial, initial+sizeof(initial)/sizeof(string)), K); break;
			}
			case 4:
			{
				string initial[] = {"001", "101", "001", "000", "111", "001", "101", "111", "110", "000", "111", "010", "110", "001"};
				int K = 6;
				_expected = 4;
				_received = _obj.mostLit(vector <string>(initial, initial+sizeof(initial)/sizeof(string)), K); break;
			}
			case 5:
			{
				string initial[] = {"01", "10", "01", "01", "10"};
				int K = 1;
				_expected = 3;
				_received = _obj.mostLit(vector <string>(initial, initial+sizeof(initial)/sizeof(string)), K); break;
			}
			/*case 6:
			{
				string initial[] = ;
				int K = ;
				_expected = ;
				_received = _obj.mostLit(vector <string>(initial, initial+sizeof(initial)/sizeof(string)), K); break;
			}*/
			/*case 7:
			{
				string initial[] = ;
				int K = ;
				_expected = ;
				_received = _obj.mostLit(vector <string>(initial, initial+sizeof(initial)/sizeof(string)), K); break;
			}*/
			/*case 8:
			{
				string initial[] = ;
				int K = ;
				_expected = ;
				_received = _obj.mostLit(vector <string>(initial, initial+sizeof(initial)/sizeof(string)), K); break;
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
