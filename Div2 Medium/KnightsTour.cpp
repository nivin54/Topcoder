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










class KnightsTour {
	public:
	int acost[8][8], visit[8][8];
	vector <string> boards;
	bool isgood ( int x ,int y ,int dx ,int dy)
	{
			int X = x + dx;
			int Y = y + dy;
			if ( X < 0 or Y < 0 or X > 7 or Y > 7 or boards[X][Y] != '.' or visit[X][Y] == 1)
					return false;
			return true;
	}
	int findcost(int i, int j )
	{
			int d[8][2] = { { -1, -2 }, { 1, -2}, { -1, 2}, { 1, 2}, { -2, -1 }, { -2, 1}, { 2, -1}, { 2, 1}};
			int res = 0;
					for(int k = 0 ; k < 8 ; ++k )
					{
							int dx = d[k][0], dy = d[k][1];
							if ( isgood( i, j, dx, dy) )							
										res += 1;																									
					}
			return res;					   				 
	}	
	int dfs (int x, int y)
	{					
			int d[8][2] = { { -1, -2 }, { 1, -2}, { -1, 2}, { 1, 2}, { -2, -1 }, { -2, 1}, { 2, -1}, { 2, 1}};
			int nx = -1, ny = -1, cost=1000000;
			for (int k = 0 ; k < 8	; ++k)
			{
					int dx = d[k][0], dy = d[k][1];
					int X = dx + x, Y = dy + y, tcost;
					if( isgood( x, y, dx, dy) )
					{
						tcost = findcost(X, Y);
						if( cost > tcost )
								{nx = X; ny = Y; cost = tcost;}
						else if ( cost == tcost )
								{
										if( nx > X ){
												nx = X; ny = Y; }
										else if( nx == X  and ny > Y)
													{nx = X; ny = Y; }
								}											
					}							
			}
			visit[x][y] = 1;						
			if ( nx == -1 and ny == -1 )
						return 1;			
			return 1 + dfs(nx, ny );							
	}		
	int visitedPositions(vector <string> board) 
	{
			memset ( acost, 0, sizeof(acost) );
			memset ( visit, 0, sizeof(visit) );
			boards = board;			
			int x, y;
			for(int i = 0 ; i < 8; ++i)
				for(int j = 0 ; j < 8 ; ++j)				
					if ( boards[i][j] == 'K')
							{ x = i; y = j; }															
			return dfs( x , y );		
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
		cout << "Testing KnightsTour (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1402736913;
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
		KnightsTour _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string board[] = {"........"
				                 ,".*.*...."
				                 ,".*......"
				                 ,"..K...*."
				                 ,"*...*..."
				                 ,"...*...."
				                 ,"...*.*.."
				                 ,"........"};
				_expected = 39;
				_received = _obj.visitedPositions(vector <string>(board, board+sizeof(board)/sizeof(string))); break;
			}
			case 1:
			{
				string board[] = {"K......."
				                 ,"........"
				                 ,"........"
				                 ,"........"
				                 ,"........"
				                 ,"........"
				                 ,"........"
				                 ,"........"};
				_expected = 64;
				_received = _obj.visitedPositions(vector <string>(board, board+sizeof(board)/sizeof(string))); break;
			}
			case 2:
			{
				string board[] = {"********"
				                 ,"*******."
				                 ,"********"
				                 ,"**.***.*"
				                 ,"********"
				                 ,"***.*.**"
				                 ,"********"
				                 ,"****K***"};
				_expected = 3;
				_received = _obj.visitedPositions(vector <string>(board, board+sizeof(board)/sizeof(string))); break;
			}
			case 3:
			{
				string board[] = {"*.*....*"
				                 ,".......*"
				                 ,"**...*.."
				                 ,"..***..."
				                 ,".**.*..."
				                 ,"..*.*..K"
				                 ,"..***.*."
				                 ,"**...*.."};
				_expected = 17;
				_received = _obj.visitedPositions(vector <string>(board, board+sizeof(board)/sizeof(string))); break;
			}
			case 4:
			{
				string board[] = {"..*...*."
				                 ,"**.....*"
				                 ,"*..*...."
				                 ,"*..*...."
				                 ,".....*.."
				                 ,"....*..K"
				                 ,"**.*...*"
				                 ,"..**...."};
				_expected = 27;
				_received = _obj.visitedPositions(vector <string>(board, board+sizeof(board)/sizeof(string))); break;
			}
			/*case 5:
			{
				string board[] = ;
				_expected = ;
				_received = _obj.visitedPositions(vector <string>(board, board+sizeof(board)/sizeof(string))); break;
			}*/
			/*case 6:
			{
				string board[] = ;
				_expected = ;
				_received = _obj.visitedPositions(vector <string>(board, board+sizeof(board)/sizeof(string))); break;
			}*/
			/*case 7:
			{
				string board[] = ;
				_expected = ;
				_received = _obj.visitedPositions(vector <string>(board, board+sizeof(board)/sizeof(string))); break;
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
