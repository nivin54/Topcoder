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










class TheLuckyNumbers {
	public:
	string B,A;
	int numbera,numberb;
	bool luck(string x)
	{
			for(int i=0;x[i];i++)
				if(x[i]!='4' and x[i]!='7')
						return false;
			return true;
	}
	int recurse(string x,int i)
	{
		    
		    stringstream c;
		    c<<x;
		    int C;c>>C;
		    if(C>numberb or C<numbera)return 0;						
			if(luck(x) and i==(int) x.length())				
					{return 1;}
			int res=0,len=x.length()+1;
			x[i]='4';res+=recurse(x,i+1);
			x[i]='7';res+=recurse(x,i+1);
			while(i==0 and len<=(int)B.length() )
			{
				string data=string(len,'4');
				res+=recurse(data,1);data[0]='7';res+=recurse(data,1);len++;
			}
			return res;			
	}
	int count(int a, int b) 
	{
			numbera=a;numberb=b;
			while(a)
			{
					A+=(a%10 +'0');
					a/=10;
			}
			reverse(A.begin(),A.end());
			while(b)
			{
				B+=(b%10 +'0');
				b/=10;
			}
			reverse(B.begin(),B.end());
			return recurse(A,0);
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
		cout << "Testing TheLuckyNumbers (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1401591304;
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
		TheLuckyNumbers _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int a = 1;
				int b = 10;
				_expected = 2;
				_received = _obj.count(a, b); break;
			}
			case 1:
			{
				int a = 11;
				int b = 20;
				_expected = 0;
				_received = _obj.count(a, b); break;
			}
			case 2:
			{
				int a = 74;
				int b = 77;
				_expected = 2;
				_received = _obj.count(a, b); break;
			}
			case 3:
			{
				int a = 1000000;
				int b = 5000000;
				_expected = 64;
				_received = _obj.count(a, b); break;
			}
			/*case 4:
			{
				int a = ;
				int b = ;
				_expected = ;
				_received = _obj.count(a, b); break;
			}*/
			/*case 5:
			{
				int a = ;
				int b = ;
				_expected = ;
				_received = _obj.count(a, b); break;
			}*/
			/*case 6:
			{
				int a = ;
				int b = ;
				_expected = ;
				_received = _obj.count(a, b); break;
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
