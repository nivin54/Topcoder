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










class TheBasketballDivTwo {
	public:
	int team[10],guest[100],host[100], sz;
	int find(vector <string> table) 
	{
		sz = table.size();
		memset(team, 0 ,sizeof(team));
		memset(guest, 0 ,sizeof(guest));
		memset(host, 0 ,sizeof(host));
		for(int i = 0 ; i < sz ; ++i )
			for(int j = 0 ; j < sz ; ++j )
					if( table[i][j] == 'W' )
							team[i] += 1;
					else if( table[i][j] == 'L' )
							team[j] += 1;
		int t = 0, Max=10000;
		for(int i = 0 ; i < sz ; ++i )
			for(int j = 0 ;j < sz ; ++ j )
					if( table[i][j] == '?' )
						{
								host[t] = i;						
								guest[t] = j;
								t++;
						}
		for (int i = 0 ; i < (1<<t) ; ++ i )
		{
		
				vector<int> cteam(team, team + sz);
				for(int j = 0 ;j < t ; ++j )
				{
						if( (i & (1<<j) ) > 0 )
								cteam[host[j]] += 1;
						else
								cteam[guest[j]] += 1;				
				}
				int m=0;
				for( int k = 0 ; k < sz ; ++k )
						m = max(m, cteam[k]);								
				Max = min(Max,m);		
		}		
		return Max;
							
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
		cout << "Testing TheBasketballDivTwo (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1403020341;
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
		TheBasketballDivTwo _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string table[] = {"X?", "?X"};
				_expected = 1;
				_received = _obj.find(vector <string>(table, table+sizeof(table)/sizeof(string))); break;
			}
			case 1:
			{
				string table[] = {"XW", "LX"};
				_expected = 2;
				_received = _obj.find(vector <string>(table, table+sizeof(table)/sizeof(string))); break;
			}
			case 2:
			{
				string table[] = {"XWL", "?XW", "WLX"};
				_expected = 2;
				_received = _obj.find(vector <string>(table, table+sizeof(table)/sizeof(string))); break;
			}
			case 3:
			{
				string table[] = {"XW?", "LX?", "??X"};
				_expected = 2;
				_received = _obj.find(vector <string>(table, table+sizeof(table)/sizeof(string))); break;
			}
			/*case 4:
			{
				string table[] = ;
				_expected = ;
				_received = _obj.find(vector <string>(table, table+sizeof(table)/sizeof(string))); break;
			}*/
			/*case 5:
			{
				string table[] = ;
				_expected = ;
				_received = _obj.find(vector <string>(table, table+sizeof(table)/sizeof(string))); break;
			}*/
			/*case 6:
			{
				string table[] = ;
				_expected = ;
				_received = _obj.find(vector <string>(table, table+sizeof(table)/sizeof(string))); break;
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
