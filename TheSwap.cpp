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


int dp[1000000][11],len;
class TheSwap {
	public:
	
	int getvalue(vector<int> number)
	{
		int ans=0;
		for(int i=0;i<(int)number.size();i++)
				ans=ans*10+number[i];
		return ans;
	}
	int run(int K,vector<int> number)
	{	
		int n=getvalue(number);	
		if(K==0)
				return n;
		int &res=dp[n][K];
		if(res)		
				return res;
		res=-1;	
		for(int i=0;i<len;i++)
			for(int j=i+1;j<len;j++)
				{
						if(i==0 and number[j]==0)
								continue;												
						swap(number[i],number[j]);
						res=max(res,run(K-1,number));
						swap(number[i],number[j]);
				
				}
		return res;
	}
	int findMax(int n, int k) 
	{
		vector<int> number;
		while(n)
		{number.push_back(n%10);n/=10;len++;}
		reverse(number.begin(),number.end());
		memset(dp,0,sizeof(dp));		
		return run(k,number);										
		
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
		cout << "Testing TheSwap (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1402415061;
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
		TheSwap _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int n = 16375;
				int k = 1;
				_expected = 76315;
				_received = _obj.findMax(n, k); break;
			}
			case 1:
			{
				int n = 432;
				int k = 1;
				_expected = 423;
				_received = _obj.findMax(n, k); break;
			}
			case 2:
			{
				int n = 90;
				int k = 4;
				_expected = -1;
				_received = _obj.findMax(n, k); break;
			}
			case 3:
			{
				int n = 5;
				int k = 2;
				_expected = -1;
				_received = _obj.findMax(n, k); break;
			}
			case 4:
			{
				int n = 436659;
				int k = 2;
				_expected = 966354;
				_received = _obj.findMax(n, k); break;
			}
			/*case 5:
			{
				int n = ;
				int k = ;
				_expected = ;
				_received = _obj.findMax(n, k); break;
			}*/
			/*case 6:
			{
				int n = ;
				int k = ;
				_expected = ;
				_received = _obj.findMax(n, k); break;
			}*/
			/*case 7:
			{
				int n = ;
				int k = ;
				_expected = ;
				_received = _obj.findMax(n, k); break;
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
