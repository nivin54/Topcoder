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










class CrazyBot {
	public:
	int visit[50][50],N;
	double Pe,Pw,Ps,Pn;
	double run(int x,int y,int n)
	{
			if(visit[x][y]==1)			
					return 0.0;
			if(n==0)
					return 1.0;
			visit[x][y]=1;
			double res=0.0;
			res+=run(x-1,y,n-1)*Pw;
			res+=run(x,y-1,n-1)*Pn;
			res+=run(x,y+1,n-1)*Ps;
			res+=run(x+1,y,n-1)*Pe;
			visit[x][y]=0;
			return res;
	}
	
	double getProbability(int n, int east, int west, int south, int north) 
	{
		
		N=n;
		Pe=east/100.00;
		Pw=west/100.00;
		Ps=south/100.00;
		Pn=north/100.00;
		return run(20,20,N);										
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
		cout << "Testing CrazyBot (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1402108893;
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
		CrazyBot _obj;
		double _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int n = 1;
				int east = 25;
				int west = 25;
				int south = 25;
				int north = 25;
				_expected = 1.0;
				_received = _obj.getProbability(n, east, west, south, north); break;
			}
			case 1:
			{
				int n = 2;
				int east = 25;
				int west = 25;
				int south = 25;
				int north = 25;
				_expected = 0.75;
				_received = _obj.getProbability(n, east, west, south, north); break;
			}
			case 2:
			{
				int n = 7;
				int east = 50;
				int west = 0;
				int south = 0;
				int north = 50;
				_expected = 1.0;
				_received = _obj.getProbability(n, east, west, south, north); break;
			}
			case 3:
			{
				int n = 14;
				int east = 50;
				int west = 50;
				int south = 0;
				int north = 0;
				_expected = 1.220703125E-4;
				_received = _obj.getProbability(n, east, west, south, north); break;
			}
			case 4:
			{
				int n = 14;
				int east = 25;
				int west = 25;
				int south = 25;
				int north = 25;
				_expected = 0.008845493197441101;
				_received = _obj.getProbability(n, east, west, south, north); break;
			}
			/*case 5:
			{
				int n = ;
				int east = ;
				int west = ;
				int south = ;
				int north = ;
				_expected = ;
				_received = _obj.getProbability(n, east, west, south, north); break;
			}*/
			/*case 6:
			{
				int n = ;
				int east = ;
				int west = ;
				int south = ;
				int north = ;
				_expected = ;
				_received = _obj.getProbability(n, east, west, south, north); break;
			}*/
			/*case 7:
			{
				int n = ;
				int east = ;
				int west = ;
				int south = ;
				int north = ;
				_expected = ;
				_received = _obj.getProbability(n, east, west, south, north); break;
			}*/
			default: return 0;
		}
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		double _elapsed = (double)(clock()-_start)/CLOCKS_PER_SEC;
		if (abs(_expected-_received) < 1e-9 || (_received > min(_expected*(1.0-1e-9), _expected*(1.0+1e-9)) && _received < max(_expected*(1.0-1e-9), _expected*(1.0+1e-9))))
			cout << "#" << _tc << ": Passed (" << _elapsed << " secs)" << endl;
		else
		{
			cout << "#" << _tc << ": Failed (" << _elapsed << " secs)" << endl;
			cout.precision(10);
			cout << "           Expected: " << _expected << endl;
			cout << "           Received: " << _received << endl;
		}
	}
}

// END CUT HERE
