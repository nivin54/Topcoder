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










class CellRemoval {
	public:
	int children[55];
	vector<int> parents;
	int dfs(int u)
	{
		int len=parents.size();
		int res=0;
		for(int j=0;j<len;j++)
				if(parents[j]==u)
						res+=dfs(j);
		if(res==0)
				res+=1;		
		children[u]=res;
		return res;
	}
						
	int cellsLeft(vector <int> parent, int deletedCell) 
	{
		parents=parent;
		memset(children,0,sizeof(children));
		int start=0;
		for(int i=0;i<(int)parent.size();i++)
				if(parent[i]==-1)
						start=i;
		int total=dfs(start);
		return total-children[deletedCell];				
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
		cout << "Testing CellRemoval (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1402333378;
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
		CellRemoval _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int parent[] = {-1,0,0,1,1};
				int deletedCell = 2;
				_expected = 2;
				_received = _obj.cellsLeft(vector <int>(parent, parent+sizeof(parent)/sizeof(int)), deletedCell); break;
			}
			case 1:
			{
				int parent[] = {-1,0,0,1,1};
				int deletedCell = 1;
				_expected = 1;
				_received = _obj.cellsLeft(vector <int>(parent, parent+sizeof(parent)/sizeof(int)), deletedCell); break;
			}
			case 2:
			{
				int parent[] = {-1,0,0,1,1};
				int deletedCell = 0;
				_expected = 0;
				_received = _obj.cellsLeft(vector <int>(parent, parent+sizeof(parent)/sizeof(int)), deletedCell); break;
			}
			case 3:
			{
				int parent[] = {-1,0,0,2,2,4,4,6,6};
				int deletedCell = 4;
				_expected = 2;
				_received = _obj.cellsLeft(vector <int>(parent, parent+sizeof(parent)/sizeof(int)), deletedCell); break;
			}
			case 4:
			{
				int parent[] = {26,2,32,36,40,19,43,24,30,13,21,14,24,21,19,4,30,10,44,12,7,32,17,43,
				                35,18,7,36,10,16,5,38,35,4,13,-1,16,26,1,12,2,5,18,40,1,17,38,44,14};
				int deletedCell = 24;
				_expected = 14;
				_received = _obj.cellsLeft(vector <int>(parent, parent+sizeof(parent)/sizeof(int)), deletedCell); break;
			}
			/*case 5:
			{
				int parent[] = ;
				int deletedCell = ;
				_expected = ;
				_received = _obj.cellsLeft(vector <int>(parent, parent+sizeof(parent)/sizeof(int)), deletedCell); break;
			}*/
			/*case 6:
			{
				int parent[] = ;
				int deletedCell = ;
				_expected = ;
				_received = _obj.cellsLeft(vector <int>(parent, parent+sizeof(parent)/sizeof(int)), deletedCell); break;
			}*/
			/*case 7:
			{
				int parent[] = ;
				int deletedCell = ;
				_expected = ;
				_received = _obj.cellsLeft(vector <int>(parent, parent+sizeof(parent)/sizeof(int)), deletedCell); break;
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
