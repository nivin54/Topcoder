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










class CirclesCountry {
	public:
	bool pointinside(int x,int y,int X,int Y,int R)
	{
		
			int xx,yy,D;
			xx=X-x;yy=Y-y;
			D=xx*xx+yy*yy;
			return R*R>D;					
	}
	int leastBorders(vector <int> X, vector <int> Y, vector <int> R, int x1, int y1, int x2, int y2) 
	{
		int dist;
		dist=0;
		int len=X.size();
		for(int i=0;i<len;i++)
		{
				int a,b;
				a=pointinside(x1,y1,X[i],Y[i],R[i]);
				b=pointinside(x2,y2,X[i],Y[i],R[i]);
				if(a ^ b)
						dist++;
		
		}
		return dist;
		
		
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
		cout << "Testing CirclesCountry (550.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1402555572;
		double PT = T/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl;
		cout << "Time  : " << T/60 << " minutes " << T%60 << " secs" << endl;
		cout << "Score : " << 550.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points" << endl;
	}
	else
	{
		int _tc; istringstream(argv[1]) >> _tc;
		CirclesCountry _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int X[] = {0};
				int Y[] = {0};
				int R[] = {2};
				int x1 = -5;
				int y1 = 1;
				int x2 = 5;
				int y2 = 1;
				_expected = 0;
				_received = _obj.leastBorders(vector <int>(X, X+sizeof(X)/sizeof(int)), vector <int>(Y, Y+sizeof(Y)/sizeof(int)), vector <int>(R, R+sizeof(R)/sizeof(int)), x1, y1, x2, y2); break;
			}
			case 1:
			{
				int X[] = {0,-6,6};
				int Y[] = {0,1,2};
				int R[] = {2,2,2};
				int x1 = -5;
				int y1 = 1;
				int x2 = 5;
				int y2 = 1;
				_expected = 2;
				_received = _obj.leastBorders(vector <int>(X, X+sizeof(X)/sizeof(int)), vector <int>(Y, Y+sizeof(Y)/sizeof(int)), vector <int>(R, R+sizeof(R)/sizeof(int)), x1, y1, x2, y2); break;
			}
			case 2:
			{
				int X[] = {1,-3,2,5,-4,12,12};
				int Y[] = {1,-1,2,5,5,1,1};
				int R[] = {8,1,2,1,1,1,2};
				int x1 = -5;
				int y1 = 1;
				int x2 = 12;
				int y2 = 1;
				_expected = 3;
				_received = _obj.leastBorders(vector <int>(X, X+sizeof(X)/sizeof(int)), vector <int>(Y, Y+sizeof(Y)/sizeof(int)), vector <int>(R, R+sizeof(R)/sizeof(int)), x1, y1, x2, y2); break;
			}
			case 3:
			{
				int X[] = {-3,2,2,0,-4,12,12,12};
				int Y[] = {-1,2,3,1,5,1,1,1};
				int R[] = {1,3,1,7,1,1,2,3};
				int x1 = 2;
				int y1 = 3;
				int x2 = 13;
				int y2 = 2;
				_expected = 5;
				_received = _obj.leastBorders(vector <int>(X, X+sizeof(X)/sizeof(int)), vector <int>(Y, Y+sizeof(Y)/sizeof(int)), vector <int>(R, R+sizeof(R)/sizeof(int)), x1, y1, x2, y2); break;
			}
			case 4:
			{
				int X[] = {-107,-38,140,148,-198,172,-179,148,176,153,-56,-187};
				int Y[] = {175,-115,23,-2,-49,-151,-52,42,0,68,109,-174};
				int R[] = {135,42,70,39,89,39,43,150,10,120,16,8};
				int x1 = 102;
				int y1 = 16;
				int x2 = 19;
				int y2 = -108;
				_expected = 3;
				_received = _obj.leastBorders(vector <int>(X, X+sizeof(X)/sizeof(int)), vector <int>(Y, Y+sizeof(Y)/sizeof(int)), vector <int>(R, R+sizeof(R)/sizeof(int)), x1, y1, x2, y2); break;
			}
			/*case 5:
			{
				int X[] = ;
				int Y[] = ;
				int R[] = ;
				int x1 = ;
				int y1 = ;
				int x2 = ;
				int y2 = ;
				_expected = ;
				_received = _obj.leastBorders(vector <int>(X, X+sizeof(X)/sizeof(int)), vector <int>(Y, Y+sizeof(Y)/sizeof(int)), vector <int>(R, R+sizeof(R)/sizeof(int)), x1, y1, x2, y2); break;
			}*/
			/*case 6:
			{
				int X[] = ;
				int Y[] = ;
				int R[] = ;
				int x1 = ;
				int y1 = ;
				int x2 = ;
				int y2 = ;
				_expected = ;
				_received = _obj.leastBorders(vector <int>(X, X+sizeof(X)/sizeof(int)), vector <int>(Y, Y+sizeof(Y)/sizeof(int)), vector <int>(R, R+sizeof(R)/sizeof(int)), x1, y1, x2, y2); break;
			}*/
			/*case 7:
			{
				int X[] = ;
				int Y[] = ;
				int R[] = ;
				int x1 = ;
				int y1 = ;
				int x2 = ;
				int y2 = ;
				_expected = ;
				_received = _obj.leastBorders(vector <int>(X, X+sizeof(X)/sizeof(int)), vector <int>(Y, Y+sizeof(Y)/sizeof(int)), vector <int>(R, R+sizeof(R)/sizeof(int)), x1, y1, x2, y2); break;
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
