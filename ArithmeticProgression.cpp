#include<bits/stdc++.h>


#define FOR(i,a,b) for(int i=a;i<b;i++)
#define LOOP(i,a) FOR(i,0,a)

#define SET(p) memset(p, -1, sizeof(p))
#define CLR(p) memset(p, 0, sizeof(p))
#define BIG(p) memset(p, 0x3f, sizeof(p))

#define ll unsigned long long
#define oo (1000000000+7)
#define EPS 0.0000000001

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










class ArithmeticProgression {
	public:
	
	double minCommonDifference(int a0, vector <int> seq) 
	{
		
		int d=0;
		double ma=0.0;
		if(seq.size())
			d=seq[0]-a0;
		for(int i=1;i<=(int)seq.size();i++)
		{
				
				int aux = a0 + d*i; 
				int c=seq[i-1]-aux,d0=seq[i-1]-(a0+d*(i-1));
				double mm=((double)(seq[i-1]-a0)/(double)i)-(double)d;
				if(c<0 || d0<d || d<0 ||mm>=1.0)
						return -1;						
				ma= max(ma,mm);				
		}
		ma+=d;
		for(int i=1;i<=(int)seq.size();i++)
				{
					int coeff=(ma*i);
					if(coeff+a0!=seq[i-1]) return -1;
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
		cout << "Testing ArithmeticProgression (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1401727600;
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
		ArithmeticProgression _obj;
		double _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int a0 = 0;
				int seq[] = {6, 13, 20, 27};
				_expected = 6.75;
				_received = _obj.minCommonDifference(a0, vector <int>(seq, seq+sizeof(seq)/sizeof(int))); break;
			}
			case 1:
			{
				int a0 = 1;
				int seq[] = {2, 3, 4, 5, 6};
				_expected = 1.0;
				_received = _obj.minCommonDifference(a0, vector <int>(seq, seq+sizeof(seq)/sizeof(int))); break;
			}
			case 2:
			{
				int a0 = 3;
				int seq[] = {};
				_expected = 0.0;
				_received = _obj.minCommonDifference(a0, vector <int>(seq, seq+sizeof(seq)/sizeof(int))); break;
			}
			case 3:
			{
				int a0 = 3;
				int seq[] = {3, 3, 3, 3, 4};
				_expected = 0.2;
				_received = _obj.minCommonDifference(a0, vector <int>(seq, seq+sizeof(seq)/sizeof(int))); break;
			}
			case 4:
			{
				int a0 = 1;
				int seq[] = {-3};
				_expected = -1.0;
				_received = _obj.minCommonDifference(a0, vector <int>(seq, seq+sizeof(seq)/sizeof(int))); break;
			}
			case 5:
			{
				int a0 = 0;
				int seq[] = {6, 14};
				_expected = -1.0;
				_received = _obj.minCommonDifference(a0, vector <int>(seq, seq+sizeof(seq)/sizeof(int))); break;
			}
			/*case 6:
			{
				int a0 = ;
				int seq[] = ;
				_expected = ;
				_received = _obj.minCommonDifference(a0, vector <int>(seq, seq+sizeof(seq)/sizeof(int))); break;
			}*/
			/*case 7:
			{
				int a0 = ;
				int seq[] = ;
				_expected = ;
				_received = _obj.minCommonDifference(a0, vector <int>(seq, seq+sizeof(seq)/sizeof(int))); break;
			}*/
			/*case 8:
			{
				int a0 = ;
				int seq[] = ;
				_expected = ;
				_received = _obj.minCommonDifference(a0, vector <int>(seq, seq+sizeof(seq)/sizeof(int))); break;
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
