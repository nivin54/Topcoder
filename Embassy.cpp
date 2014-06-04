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










class Embassy {
	public:
	int visaApplication(vector <int> forms, int dayLength, int openTime) 
	{
		
		int sz=forms.size();
		int ret=1<<30;
		for(int start=0;start<dayLength;start++)
		{
			int curr=start;		
			for(int i=0;i<sz;i++)
			{
								
				curr+=forms[i];
				if(curr%dayLength > openTime)
						curr=curr + dayLength -curr% dayLength;			
			}
		
		ret=min(ret,curr-start);
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
		cout << "Testing Embassy (500.0 points)" << endl << endl;
		for (int i = 0; i < 3; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1401860977;
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
		Embassy _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int forms[] = {4,4,4};
				int dayLength = 24;
				int openTime = 8;
				_expected = 12;
				_received = _obj.visaApplication(vector <int>(forms, forms+sizeof(forms)/sizeof(int)), dayLength, openTime); break;
			}
			case 1:
			{
				int forms[] = {4,4,4,4};
				int dayLength = 24;
				int openTime = 8;
				_expected = 28;
				_received = _obj.visaApplication(vector <int>(forms, forms+sizeof(forms)/sizeof(int)), dayLength, openTime); break;
			}
			case 2:
			{
				int forms[] = {3,3,3,3};
				int dayLength = 24;
				int openTime = 1;
				_expected = 74;
				_received = _obj.visaApplication(vector <int>(forms, forms+sizeof(forms)/sizeof(int)), dayLength, openTime); break;
			}
			case 3:
			{
				int forms[] = {25,500,630,2500,1000,350,22,58,100,400,500,5000};
				int dayLength = 1440;
				int openTime = 360;
				_expected = 16945;
				_received = _obj.visaApplication(vector <int>(forms, forms+sizeof(forms)/sizeof(int)), dayLength, openTime); break;
			}
			/*case 4:
			{
				int forms[] = ;
				int dayLength = ;
				int openTime = ;
				_expected = ;
				_received = _obj.visaApplication(vector <int>(forms, forms+sizeof(forms)/sizeof(int)), dayLength, openTime); break;
			}*/
			/*case 5:
			{
				int forms[] = ;
				int dayLength = ;
				int openTime = ;
				_expected = ;
				_received = _obj.visaApplication(vector <int>(forms, forms+sizeof(forms)/sizeof(int)), dayLength, openTime); break;
			}*/
			/*case 6:
			{
				int forms[] = ;
				int dayLength = ;
				int openTime = ;
				_expected = ;
				_received = _obj.visaApplication(vector <int>(forms, forms+sizeof(forms)/sizeof(int)), dayLength, openTime); break;
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
