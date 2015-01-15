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










class SubrectanglesOfTable {
	public:
	vector<long long> getQuantity(vector <string> table) 
	{
		
		int row,column;
		row=table.size();
		column=table[0].length();
		vector<long long > res(26,0);
		for(int i=0;i<row*2;i++)
			for(int j=0;j<2*column;j++)							
					res[table[i%row][j%column]-'A']+= (i+1)*(j+1)*(column*2-j)*(row*2-i);
			
		return res;
		
		
		
		
		
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
		cout << "Testing SubrectanglesOfTable (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1402243381;
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
		SubrectanglesOfTable _obj;
		vector<long long> _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string table[] = {"OK"};
				long long __expected[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
				_expected = vector<long long>(__expected, __expected+sizeof(__expected)/sizeof(long long));
				_received = _obj.getQuantity(vector <string>(table, table+sizeof(table)/sizeof(string))); break;
			}
			case 1:
			{
				string table[] = {"GOOD", "LUCK"};
				long long __expected[] = {0, 0, 320, 280, 0, 0, 280, 0, 0, 0, 280, 280, 0, 0, 640, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0 };
				_expected = vector<long long>(__expected, __expected+sizeof(__expected)/sizeof(long long));
				_received = _obj.getQuantity(vector <string>(table, table+sizeof(table)/sizeof(string))); break;
			}
			case 2:
			{
				string table[] = {"TANYA",
				                  "HAPPY",
				                  "BIRTH",
				                  "DAYYY"};
				long long __expected[] = {5168, 1280, 0, 1120, 0, 0, 0, 2560, 1472, 0, 0, 0, 0, 1344, 0, 3008, 0, 1536, 0, 2592, 0, 0, 0, 0, 6320, 0 };
				_expected = vector<long long>(__expected, __expected+sizeof(__expected)/sizeof(long long));
				_received = _obj.getQuantity(vector <string>(table, table+sizeof(table)/sizeof(string))); break;
			}
			/*case 3:
			{
				string table[] = ;
				long long __expected[] = ;
				_expected = vector<long long>(__expected, __expected+sizeof(__expected)/sizeof(long long));
				_received = _obj.getQuantity(vector <string>(table, table+sizeof(table)/sizeof(string))); break;
			}*/
			/*case 4:
			{
				string table[] = ;
				long long __expected[] = ;
				_expected = vector<long long>(__expected, __expected+sizeof(__expected)/sizeof(long long));
				_received = _obj.getQuantity(vector <string>(table, table+sizeof(table)/sizeof(string))); break;
			}*/
			/*case 5:
			{
				string table[] = ;
				long long __expected[] = ;
				_expected = vector<long long>(__expected, __expected+sizeof(__expected)/sizeof(long long));
				_received = _obj.getQuantity(vector <string>(table, table+sizeof(table)/sizeof(string))); break;
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
