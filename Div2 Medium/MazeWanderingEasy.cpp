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










class MazeWanderingEasy {
	public:
	vector <string> graph;
	int visit[66][66];
	int res,len,row,column;
	int dfs(int x,int y)
	{
		if(x<0 or y<0 or x>=row or y>=column or graph[x][y]=='X' or visit[x][y]==1)
							return 0;
		visit[x][y]=1;
		if(graph[x][y]=='*')
					return 1000000;
		int decision=0,res=1;
		int xy[4][2]={{-1,0},{1,0},{0,1},{0,-1}};
		for(int i=0;i<4;i++)
				{
						int X,Y;
						X=x+xy[i][0];
						Y=y+xy[i][1];
						int aux=dfs(X,Y);
						if(aux)
						{ decision++;
							res=max(res,aux);}										
				}
		if(decision>1)
				res++;
		return res;
	}	
	int decisions(vector <string> maze) 
	{
		graph=maze;		
		row=maze.size();
		column=maze[0].length();
		for(int i=0;i<row;i++)
			for(int j=0;j<column;j++)
					if(maze[i][j]=='M')
							res=dfs(i,j);
		memset(visit,0,sizeof(visit));
		return res-1000000;		
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
		cout << "Testing MazeWanderingEasy (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1402468062;
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
		MazeWanderingEasy _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string maze[] = {"*.M"};
				_expected = 0;
				_received = _obj.decisions(vector <string>(maze, maze+sizeof(maze)/sizeof(string))); break;
			}
			case 1:
			{
				string maze[] = {"*.M",
				                 ".X."};
				_expected = 1;
				_received = _obj.decisions(vector <string>(maze, maze+sizeof(maze)/sizeof(string))); break;
			}
			case 2:
			{
				string maze[] = {"...",
				                 "XMX",
				                 "..*"};
				_expected = 2;
				_received = _obj.decisions(vector <string>(maze, maze+sizeof(maze)/sizeof(string))); break;
			}
			case 3:
			{
				string maze[] = {".X.X......X",
				                 ".X*.X.XXX.X",
				                 ".XX.X.XM...",
				                 "......XXXX."};
				_expected = 3;
				_received = _obj.decisions(vector <string>(maze, maze+sizeof(maze)/sizeof(string))); break;
			}
			case 4:
			{
				string maze[] = {"..........*",
				                 ".XXXXXXXXXX",
				                 "...........",
				                 "XXXXXXXXXX.",
				                 "M.........."};
				_expected = 0;
				_received = _obj.decisions(vector <string>(maze, maze+sizeof(maze)/sizeof(string))); break;
			}
			/*case 5:
			{
				string maze[] = ;
				_expected = ;
				_received = _obj.decisions(vector <string>(maze, maze+sizeof(maze)/sizeof(string))); break;
			}*/
			/*case 6:
			{
				string maze[] = ;
				_expected = ;
				_received = _obj.decisions(vector <string>(maze, maze+sizeof(maze)/sizeof(string))); break;
			}*/
			/*case 7:
			{
				string maze[] = ;
				_expected = ;
				_received = _obj.decisions(vector <string>(maze, maze+sizeof(maze)/sizeof(string))); break;
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
