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










class RevealTriangle {
	public:
	
	vector <string> calcTriangle(vector <string> questionMarkTriangle) 
	{
		reverse(questionMarkTriangle.begin(),questionMarkTriangle.end());
		for(int i=1;i<(int)questionMarkTriangle.size();i++)
		{
			int pos,a,b,c;
			for(int j=0;j<(int)questionMarkTriangle[i].length();j++)
					if(questionMarkTriangle[i][j]!='?')
							pos=j;
			a=questionMarkTriangle[i][pos]-'0';
			for(int j=pos-1;j>=0;j--)
			{
				c=questionMarkTriangle[i-1][j]-'0';
				if(c<a)	b=c+10-a;
				else b=c-a;
				questionMarkTriangle[i][j]=b+'0';
				a=b;				
			}
			a=questionMarkTriangle[i][pos]-'0';
			int len=questionMarkTriangle[i].length();
			for(int j=pos+1;j<len;j++)
			{
				c=questionMarkTriangle[i-1][j-1]-'0';
				if(c<a) b=c+10-a;
				else b=c-a;
				questionMarkTriangle[i][j]=b+'0';
				a=b;
			
			}
		}
		reverse(questionMarkTriangle.begin(),questionMarkTriangle.end());
		
		
		return questionMarkTriangle;		
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
		cout << "Testing RevealTriangle (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1401595580;
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
		RevealTriangle _obj;
		vector <string> _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string questionMarkTriangle[] = {"4??", 
				                                 "?2", 
				                                 "1"};
				string __expected[] = {"457", "92", "1" };
				_expected = vector <string>(__expected, __expected+sizeof(__expected)/sizeof(string));
				_received = _obj.calcTriangle(vector <string>(questionMarkTriangle, questionMarkTriangle+sizeof(questionMarkTriangle)/sizeof(string))); break;
			}
			case 1:
			{
				string questionMarkTriangle[] = {"1"};
				string __expected[] = {"1" };
				_expected = vector <string>(__expected, __expected+sizeof(__expected)/sizeof(string));
				_received = _obj.calcTriangle(vector <string>(questionMarkTriangle, questionMarkTriangle+sizeof(questionMarkTriangle)/sizeof(string))); break;
			}
			case 2:
			{
				string questionMarkTriangle[] = {"???2", "??2", "?2", "2"};
				string __expected[] = {"0002", "002", "02", "2" };
				_expected = vector <string>(__expected, __expected+sizeof(__expected)/sizeof(string));
				_received = _obj.calcTriangle(vector <string>(questionMarkTriangle, questionMarkTriangle+sizeof(questionMarkTriangle)/sizeof(string))); break;
			}
			case 3:
			{
				string questionMarkTriangle[] = {"??5?", "??9", "?4", "6"};
				string __expected[] = {"7054", "759", "24", "6" };
				_expected = vector <string>(__expected, __expected+sizeof(__expected)/sizeof(string));
				_received = _obj.calcTriangle(vector <string>(questionMarkTriangle, questionMarkTriangle+sizeof(questionMarkTriangle)/sizeof(string))); break;
			}
			/*case 4:
			{
				string questionMarkTriangle[] = ;
				string __expected[] = ;
				_expected = vector <string>(__expected, __expected+sizeof(__expected)/sizeof(string));
				_received = _obj.calcTriangle(vector <string>(questionMarkTriangle, questionMarkTriangle+sizeof(questionMarkTriangle)/sizeof(string))); break;
			}*/
			/*case 5:
			{
				string questionMarkTriangle[] = ;
				string __expected[] = ;
				_expected = vector <string>(__expected, __expected+sizeof(__expected)/sizeof(string));
				_received = _obj.calcTriangle(vector <string>(questionMarkTriangle, questionMarkTriangle+sizeof(questionMarkTriangle)/sizeof(string))); break;
			}*/
			/*case 6:
			{
				string questionMarkTriangle[] = ;
				string __expected[] = ;
				_expected = vector <string>(__expected, __expected+sizeof(__expected)/sizeof(string));
				_received = _obj.calcTriangle(vector <string>(questionMarkTriangle, questionMarkTriangle+sizeof(questionMarkTriangle)/sizeof(string))); break;
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
			cout << "           Expected: {";
			for (unsigned i = 0; i < _expected.size(); i++)
			{
				if (i) cout << ",";
				cout << " \"" << _expected[i] << "\"";
			}
			cout << " }" << endl;
			cout << "           Received: {";
			for (unsigned i = 0; i < _received.size(); i++)
			{
				if (i) cout << ",";
				cout << " \"" << _received[i] << "\"";
			}
			cout << " }" << endl;
		}
	}
}

// END CUT HERE
