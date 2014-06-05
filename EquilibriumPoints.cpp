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










class EquilibriumPoints {
	public:
	
	double f(double m1,double d)
	{
		return  m1/d/d;
	}
	vector <double> getPoints(vector <int> x, vector <int> m) 
	{
		int n=x.size();
		vector<double> ret;
		for(int i=0;i<n-1;i++)
		{
			
			double lo=x[i],hi=x[i+1];
			
			for(int iter=0;iter<500;iter++)
			{
					double mid=(lo+hi)/2;
					double force=0;
					for(int j=0;j<i+1;j++)
						force -=f(m[j],mid-x[j]);
					for(int j=i+1;j<n;j++)
								force+=f(m[j],x[j]-mid);
					if(force<0)
							lo=mid;
					else
							hi=mid;
				}
				ret.push_back((lo+hi)/2);
			}
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
		cout << "Testing EquilibriumPoints (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1401966941;
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
		EquilibriumPoints _obj;
		vector <double> _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int x[] = {1, 2};
				int m[] = {1, 1};
				double __expected[] = {1.5 };
				_expected = vector <double>(__expected, __expected+sizeof(__expected)/sizeof(double));
				_received = _obj.getPoints(vector <int>(x, x+sizeof(x)/sizeof(int)), vector <int>(m, m+sizeof(m)/sizeof(int))); break;
			}
			case 1:
			{
				int x[] = {1, 2};
				int m[] = {1, 1000};
				double __expected[] = {1.0306534300317156 };
				_expected = vector <double>(__expected, __expected+sizeof(__expected)/sizeof(double));
				_received = _obj.getPoints(vector <int>(x, x+sizeof(x)/sizeof(int)), vector <int>(m, m+sizeof(m)/sizeof(int))); break;
			}
			case 2:
			{
				int x[] = {1, 2, 3};
				int m[] = {1, 2, 1};
				double __expected[] = {1.4060952084922507, 2.5939047915077493 };
				_expected = vector <double>(__expected, __expected+sizeof(__expected)/sizeof(double));
				_received = _obj.getPoints(vector <int>(x, x+sizeof(x)/sizeof(int)), vector <int>(m, m+sizeof(m)/sizeof(int))); break;
			}
			case 3:
			{
				int x[] = {2, 3, 5, 7};
				int m[] = {3, 2, 7, 5};
				double __expected[] = {2.532859446114924, 3.7271944335152813, 6.099953640852538 };
				_expected = vector <double>(__expected, __expected+sizeof(__expected)/sizeof(double));
				_received = _obj.getPoints(vector <int>(x, x+sizeof(x)/sizeof(int)), vector <int>(m, m+sizeof(m)/sizeof(int))); break;
			}
			/*case 4:
			{
				int x[] = ;
				int m[] = ;
				double __expected[] = ;
				_expected = vector <double>(__expected, __expected+sizeof(__expected)/sizeof(double));
				_received = _obj.getPoints(vector <int>(x, x+sizeof(x)/sizeof(int)), vector <int>(m, m+sizeof(m)/sizeof(int))); break;
			}*/
			/*case 5:
			{
				int x[] = ;
				int m[] = ;
				double __expected[] = ;
				_expected = vector <double>(__expected, __expected+sizeof(__expected)/sizeof(double));
				_received = _obj.getPoints(vector <int>(x, x+sizeof(x)/sizeof(int)), vector <int>(m, m+sizeof(m)/sizeof(int))); break;
			}*/
			/*case 6:
			{
				int x[] = ;
				int m[] = ;
				double __expected[] = ;
				_expected = vector <double>(__expected, __expected+sizeof(__expected)/sizeof(double));
				_received = _obj.getPoints(vector <int>(x, x+sizeof(x)/sizeof(int)), vector <int>(m, m+sizeof(m)/sizeof(int))); break;
			}*/
			default: return 0;
		}
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		double _elapsed = (double)(clock()-_start)/CLOCKS_PER_SEC;
		bool _passed = _expected.size() == _received.size();
		for (unsigned i = 0; i < _received.size(); i++)
			_passed = _passed && (abs(_expected[i]-_received[i]) < 1e-9 || (_received[i] > min(_expected[i]*(1.0-1e-9), _expected[i]*(1.0+1e-9)) && _received[i] < max(_expected[i]*(1.0-1e-9), _expected[i]*(1.0+1e-9))));
		if (_passed)
			cout << "#" << _tc << ": Passed (" << _elapsed << " secs)" << endl;
		else
		{
			cout << "#" << _tc << ": Failed (" << _elapsed << " secs)" << endl;
			cout.precision(10);
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
