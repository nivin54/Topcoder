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










class PaperAndPaintEasy {
	public:
	long long computeArea(int width, int height, int xfold, int cnt, int x1, int y1, int x2, int y2) 
	{
		long long total=(long long)width*(long long)height;
		long long sx,squares;
		if(2*xfold > width)
				{sx=width-xfold; }
		else
				{sx=xfold; }
		squares= (cnt+1) ;
		long long totalpaint=0;
		if(x2<=sx)
				totalpaint= (long long)(x2-x1)*(long long)(y2-y1)*(long long)squares*(2LL);
		else if(x1>=sx)
				totalpaint= (long long)(x2-x1)*(long long)(y2-y1)*(long long)squares;
		else 
				totalpaint= (long long)(sx-x1)*(long long)(y2-y1)*(long long)squares*(2LL) + (long long)(x2-sx)*(long long)(y2-y1)*(long long)squares;
		return total - totalpaint;
		
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
		cout << "Testing PaperAndPaintEasy (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1402483113;
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
		PaperAndPaintEasy _obj;
		long long _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int width = 5;
				int height = 6;
				int xfold = 2;
				int cnt = 2;
				int x1 = 1;
				int y1 = 1;
				int x2 = 3;
				int y2 = 2;
				_expected = 21LL;
				_received = _obj.computeArea(width, height, xfold, cnt, x1, y1, x2, y2); break;
			}
			case 1:
			{
				int width = 3;
				int height = 13;
				int xfold = 1;
				int cnt = 0;
				int x1 = 1;
				int y1 = 8;
				int x2 = 2;
				int y2 = 12;
				_expected = 35LL;
				_received = _obj.computeArea(width, height, xfold, cnt, x1, y1, x2, y2); break;
			}
			case 2:
			{
				int width = 12;
				int height = 12;
				int xfold = 7;
				int cnt = 3;
				int x1 = 3;
				int y1 = 1;
				int x2 = 6;
				int y2 = 2;
				_expected = 124LL;
				_received = _obj.computeArea(width, height, xfold, cnt, x1, y1, x2, y2); break;
			}
			case 3:
			{
				int width = 4;
				int height = 5;
				int xfold = 4;
				int cnt = 0;
				int x1 = 0;
				int y1 = 0;
				int x2 = 1;
				int y2 = 1;
				_expected = 19LL;
				_received = _obj.computeArea(width, height, xfold, cnt, x1, y1, x2, y2); break;
			}
			case 4:
			{
				int width = 4;
				int height = 8;
				int xfold = 4;
				int cnt = 3;
				int x1 = 0;
				int y1 = 1;
				int x2 = 2;
				int y2 = 2;
				_expected = 24LL;
				_received = _obj.computeArea(width, height, xfold, cnt, x1, y1, x2, y2); break;
			}
			case 5:
			{
				int width = 4;
				int height = 8;
				int xfold = 3;
				int cnt = 0;
				int x1 = 1;
				int y1 = 1;
				int x2 = 3;
				int y2 = 2;
				_expected = 30LL;
				_received = _obj.computeArea(width, height, xfold, cnt, x1, y1, x2, y2); break;
			}
			/*case 6:
			{
				int width = ;
				int height = ;
				int xfold = ;
				int cnt = ;
				int x1 = ;
				int y1 = ;
				int x2 = ;
				int y2 = ;
				_expected = LL;
				_received = _obj.computeArea(width, height, xfold, cnt, x1, y1, x2, y2); break;
			}*/
			/*case 7:
			{
				int width = ;
				int height = ;
				int xfold = ;
				int cnt = ;
				int x1 = ;
				int y1 = ;
				int x2 = ;
				int y2 = ;
				_expected = LL;
				_received = _obj.computeArea(width, height, xfold, cnt, x1, y1, x2, y2); break;
			}*/
			/*case 8:
			{
				int width = ;
				int height = ;
				int xfold = ;
				int cnt = ;
				int x1 = ;
				int y1 = ;
				int x2 = ;
				int y2 = ;
				_expected = LL;
				_received = _obj.computeArea(width, height, xfold, cnt, x1, y1, x2, y2); break;
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
