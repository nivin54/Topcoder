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










class ThreePhotos {
	public:
	int removeCubes(vector <string> A, vector <string> B, vector <string> C) 
	{
		
		int sz=A[0].length();
		char a[sz][sz],b[sz][sz],c[sz][sz];
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		int ret=sz*sz*sz;
		for(int i=0;i<sz;i++)
			for(int j=0;j<sz;j++)
				for(int k=0;k<sz;k++)
				{
					if(A[i][j]=='Y' and B[i][k]=='Y' and C[j][k]=='Y')
							{ret--;a[i][j]='Y';b[i][k]='Y';c[j][k]='Y';				}
				}
		for(int i=0;i<sz;i++)
			for(int j=0;j<sz;j++)
					if((A[i][j]=='Y' and A[i][j]!=a[i][j]) or (B[i][j]=='Y' and B[i][j]!=b[i][j]) or (C[i][j]=='Y' and C[i][j]!=c[i][j]) )
								return -1;
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
		cout << "Testing ThreePhotos (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1401892666;
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
		ThreePhotos _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string A[] = {"YY","YY"};
				string B[] = {"YY","YY"};
				string C[] = {"YY","YY"};
				_expected = 0;
				_received = _obj.removeCubes(vector <string>(A, A+sizeof(A)/sizeof(string)), vector <string>(B, B+sizeof(B)/sizeof(string)), vector <string>(C, C+sizeof(C)/sizeof(string))); break;
			}
			case 1:
			{
				string A[] = {"NNN","NNN","NNN"};
				string B[] = {"NNN","NNN","NNN"};
				string C[] = {"NNN","NNN","NNN"};
				_expected = 27;
				_received = _obj.removeCubes(vector <string>(A, A+sizeof(A)/sizeof(string)), vector <string>(B, B+sizeof(B)/sizeof(string)), vector <string>(C, C+sizeof(C)/sizeof(string))); break;
			}
			case 2:
			{
				string A[] = {"NNNNN","NNNNN","NNNNN","YYNNN","NNNNN"};
				string B[] = {"NNNNN","NNNNN","NNNNN","NNYNY","NNNNN"};
				string C[] = {"NNYNN","NNNNY","NNNNN","NNNNN","NNNNN"};
				_expected = 123;
				_received = _obj.removeCubes(vector <string>(A, A+sizeof(A)/sizeof(string)), vector <string>(B, B+sizeof(B)/sizeof(string)), vector <string>(C, C+sizeof(C)/sizeof(string))); break;
			}
			case 3:
			{
				string A[] = {"YY","YY"};
				string B[] = {"YY","YY"};
				string C[] = {"YN","YN"};
				_expected = -1;
				_received = _obj.removeCubes(vector <string>(A, A+sizeof(A)/sizeof(string)), vector <string>(B, B+sizeof(B)/sizeof(string)), vector <string>(C, C+sizeof(C)/sizeof(string))); break;
			}
			/*case 4:
			{
				string A[] = ;
				string B[] = ;
				string C[] = ;
				_expected = ;
				_received = _obj.removeCubes(vector <string>(A, A+sizeof(A)/sizeof(string)), vector <string>(B, B+sizeof(B)/sizeof(string)), vector <string>(C, C+sizeof(C)/sizeof(string))); break;
			}*/
			/*case 5:
			{
				string A[] = ;
				string B[] = ;
				string C[] = ;
				_expected = ;
				_received = _obj.removeCubes(vector <string>(A, A+sizeof(A)/sizeof(string)), vector <string>(B, B+sizeof(B)/sizeof(string)), vector <string>(C, C+sizeof(C)/sizeof(string))); break;
			}*/
			/*case 6:
			{
				string A[] = ;
				string B[] = ;
				string C[] = ;
				_expected = ;
				_received = _obj.removeCubes(vector <string>(A, A+sizeof(A)/sizeof(string)), vector <string>(B, B+sizeof(B)/sizeof(string)), vector <string>(C, C+sizeof(C)/sizeof(string))); break;
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
