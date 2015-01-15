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










class WordsGame {
	public:
	vector <string> board;
	string words, swords;
	int n;
	string gethorizontal(int index)
	{return board[index];}
	string getvertical (int index)
	{
		string cword;
		for(int i=0; i < n ; ++i)cword += board[i][index];
		return cword;
	}	
	bool istrue(string cword)
	{
		sort( cword.begin(), cword.end() );
		if( cword != swords)return false;
		return true;
	}
	int getpos ( char ch, string words )
	{
		for (int i = 0 ; i < n ; ++i )
				if( ch == words[i] )
						return i;
		return -1;
	}	
	int totalcost(string inorder )
	{
		int totalcost = 0;
		for(int i = 0 ;i < n ; i ++ )	
				if(inorder[i] != words[i] )
				{					
					int pos = getpos( words[i], inorder );				
					swap(inorder[i],inorder[pos]);
					totalcost++;									
				}
		return totalcost;				
	}			
	int minimumSwaps(vector <string> grid, string word) 
	{
		
			words = word;
			board = grid;
			n = grid.size();
			swords = words;
			sort( swords.begin(), swords.end() );
			int cost = 324324234;
			for(int edge = 0 ; edge < n ; ++edge )
			{
					string wordq = getvertical(edge); 
					if( istrue( wordq)  )
						cost = min (cost, totalcost( wordq ) );
					wordq = gethorizontal(edge);	
					if( istrue( wordq ) )
						cost = min (cost, totalcost( wordq ) );					
			}
			return cost==324324234 ? -1:cost;
		
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
		cout << "Testing WordsGame (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1403020766;
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
		WordsGame _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string grid[] = {"Mu",
				                 "uM"};
				string word = "Mu";
				_expected = 0;
				_received = _obj.minimumSwaps(vector <string>(grid, grid+sizeof(grid)/sizeof(string)), word); break;
			}
			case 1:
			{
				string grid[] = {"sdf",
				                 "bca",
				                 "hgf"};
				string word = "abc";
				_expected = 2;
				_received = _obj.minimumSwaps(vector <string>(grid, grid+sizeof(grid)/sizeof(string)), word); break;
			}
			case 2:
			{
				string grid[] = {"cdf",
				                 "bca",
				                 "agf"};
				string word = "abc";
				_expected = 1;
				_received = _obj.minimumSwaps(vector <string>(grid, grid+sizeof(grid)/sizeof(string)), word); break;
			}
			case 3:
			{
				string grid[] = {"xSZB",
				                 "gbHk",
				                 "kbgH",
				                 "WFSg"};
				string word = "bkHg";
				_expected = 2;
				_received = _obj.minimumSwaps(vector <string>(grid, grid+sizeof(grid)/sizeof(string)), word); break;
			}
			case 4:
			{
				string grid[] = {"eKUNGHktLB",
				                 "EtBFDndTlG",
				                 "RRFHmjwrDs",
				                 "eKYsHlYhlu",
				                 "ljxyJSwTds",
				                 "dUQToyWHvl",
				                 "azDPWRwioE",
				                 "EARdktoDBh",
				                 "dmIqcGSvCE",
				                 "wXypNQEMxz"};
				string word = "oDmWcJHGNk";
				_expected = 6;
				_received = _obj.minimumSwaps(vector <string>(grid, grid+sizeof(grid)/sizeof(string)), word); break;
			}
			case 5:
			{
				string grid[] = {"ab",
				                 "bA"};
				string word = "aB";
				_expected = -1;
				_received = _obj.minimumSwaps(vector <string>(grid, grid+sizeof(grid)/sizeof(string)), word); break;
			}
			/*case 6:
			{
				string grid[] = ;
				string word = ;
				_expected = ;
				_received = _obj.minimumSwaps(vector <string>(grid, grid+sizeof(grid)/sizeof(string)), word); break;
			}*/
			/*case 7:
			{
				string grid[] = ;
				string word = ;
				_expected = ;
				_received = _obj.minimumSwaps(vector <string>(grid, grid+sizeof(grid)/sizeof(string)), word); break;
			}*/
			/*case 8:
			{
				string grid[] = ;
				string word = ;
				_expected = ;
				_received = _obj.minimumSwaps(vector <string>(grid, grid+sizeof(grid)/sizeof(string)), word); break;
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
