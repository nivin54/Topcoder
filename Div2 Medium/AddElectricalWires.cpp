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










class AddElectricalWires {
	public:
	int sumn(int x)
	{
		int res=0;
		while(x--)			
			res+=x;		
		return res;
	}
	vector<string> wire;
	int visit[105];
	int dfs(int u)
	{
			if(visit[u])
					return 0;
			int res=1;
			visit[u]=1;
			for(int j=0;j<(int)wire[u].length();j++)
					if(wire[u][j]=='1')
							res+=dfs(j);
			return res;
	}
	int maxNewWires(vector <string> wires, vector <int> gridConnections) 
	{
		wire=wires;
		int ans=0,wired=0;
		memset(visit,0,sizeof(visit));
		priority_queue<int> PQ;
		for(int i=0;i<(int)gridConnections.size();i++)						
						PQ.push(dfs(gridConnections[i]));				
		for(int i=0;i<(int)wires.size();i++)
			for(int j=0;j<(int)wires[i].length();j++)
						if(wires[i][j]=='1')
										wired++;
		for(int i=0;i<(int)wires[0].length();i++)
		{
					if(visit[i]==0)
						{
							int aux=PQ.top()+1;
							PQ.pop();
							PQ.push(aux);
						}
		}
		while(!PQ.empty()){
			ans+=sumn(PQ.top());PQ.pop();}
		return ans-(wired/2);
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
		cout << "Testing AddElectricalWires (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1401679826;
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
		AddElectricalWires _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string wires[] = {"000","000","000"};
				int gridConnections[] = {0};
				_expected = 3;
				_received = _obj.maxNewWires(vector <string>(wires, wires+sizeof(wires)/sizeof(string)), vector <int>(gridConnections, gridConnections+sizeof(gridConnections)/sizeof(int))); break;
			}
			case 1:
			{
				string wires[] = {"000","000","000"};
				int gridConnections[] = {0,1};
				_expected = 1;
				_received = _obj.maxNewWires(vector <string>(wires, wires+sizeof(wires)/sizeof(string)), vector <int>(gridConnections, gridConnections+sizeof(gridConnections)/sizeof(int))); break;
			}
			case 2:
			{
				string wires[] = {"01","10"};
				int gridConnections[] = {0};
				_expected = 0;
				_received = _obj.maxNewWires(vector <string>(wires, wires+sizeof(wires)/sizeof(string)), vector <int>(gridConnections, gridConnections+sizeof(gridConnections)/sizeof(int))); break;
			}
			case 3:
			{
				string wires[] = {"00000","00000","00000","00000","00000"};
				int gridConnections[] = {0,1,2,3,4};
				_expected = 0;
				_received = _obj.maxNewWires(vector <string>(wires, wires+sizeof(wires)/sizeof(string)), vector <int>(gridConnections, gridConnections+sizeof(gridConnections)/sizeof(int))); break;
			}
			case 4:
			{
				string wires[] = {"01000","10100","01010","00100","00000"};
				int gridConnections[] = {2,4};
				_expected = 3;
				_received = _obj.maxNewWires(vector <string>(wires, wires+sizeof(wires)/sizeof(string)), vector <int>(gridConnections, gridConnections+sizeof(gridConnections)/sizeof(int))); break;
			}
			/*case 5:
			{
				string wires[] = ;
				int gridConnections[] = ;
				_expected = ;
				_received = _obj.maxNewWires(vector <string>(wires, wires+sizeof(wires)/sizeof(string)), vector <int>(gridConnections, gridConnections+sizeof(gridConnections)/sizeof(int))); break;
			}*/
			/*case 6:
			{
				string wires[] = ;
				int gridConnections[] = ;
				_expected = ;
				_received = _obj.maxNewWires(vector <string>(wires, wires+sizeof(wires)/sizeof(string)), vector <int>(gridConnections, gridConnections+sizeof(gridConnections)/sizeof(int))); break;
			}*/
			/*case 7:
			{
				string wires[] = ;
				int gridConnections[] = ;
				_expected = ;
				_received = _obj.maxNewWires(vector <string>(wires, wires+sizeof(wires)/sizeof(string)), vector <int>(gridConnections, gridConnections+sizeof(gridConnections)/sizeof(int))); break;
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
