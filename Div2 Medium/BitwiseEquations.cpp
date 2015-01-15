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










class BitwiseEquations 
{
	public:
	string bitwise(int n)
	{
		string res="";
		while(n)
		{
			res+=((n%2)+'0');
			n/=2;
		}
		return res;		
	}
	long long add(string a,string b)
	{
			int len=a.length(),j=0;
			long long res=0;
			for(int i=0;i<(int)b.length() and j<len;i++)
			{
						if(b[i]=='1')
								continue;
						else 
						{														
							res+=pow(2,i)*(a[j]-'0');j++;						
						}										
			}
			
			int K=b.length();
			while(j<len)
			{
				res+=(long long)pow(2LL,K)*(long long)(a[j]-'0');
				j++;K++;
			}			
			return res;						
	}
	long long kthPlusOrSolution(int x, int k) 
	{
		
		string K,X;
		K=bitwise(k);X=bitwise(x);
		return add(K,X);
		
		
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
		cout << "Testing BitwiseEquations (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1402245722;
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
		BitwiseEquations _obj;
		long long _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int x = 5;
				int k = 1;
				_expected = 2LL;
				_received = _obj.kthPlusOrSolution(x, k); break;
			}
			case 1:
			{
				int x = 5;
				int k = 5;
				_expected = 18LL;
				_received = _obj.kthPlusOrSolution(x, k); break;
			}
			case 2:
			{
				int x = 10;
				int k = 3;
				_expected = 5LL;
				_received = _obj.kthPlusOrSolution(x, k); break;
			}
			case 3:
			{
				int x = 1;
				int k = 1000000000;
				_expected = 2000000000LL;
				_received = _obj.kthPlusOrSolution(x, k); break;
			}
			/*case 4:
			{
				int x = ;
				int k = ;
				_expected = LL;
				_received = _obj.kthPlusOrSolution(x, k); break;
			}*/
			/*case 5:
			{
				int x = ;
				int k = ;
				_expected = LL;
				_received = _obj.kthPlusOrSolution(x, k); break;
			}*/
			/*case 6:
			{
				int x = ;
				int k = ;
				_expected = LL;
				_received = _obj.kthPlusOrSolution(x, k); break;
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
