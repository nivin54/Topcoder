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










class Undo {
	public:
	int gettime(string E)
	{
			int ans=0;
			for(int i=0;i<(int)E.length();i++)
					if(E[i]>='0' and E[i]<='9')
							ans=ans*10+E[i]-'0';
			return ans;
	}
	string getText(vector <string> commands, vector <int> time) 
	{
		int used[commands.size()+1];
		memset(used,0,sizeof(used));
		for(int i=commands.size()-1;i>=0;i--)
		{
				if(used[i])
						continue;
				if(commands[i][0]=='u')
				{
					int T=time[i]-gettime(commands[i]);
					for(int k=0;k<i;k++)
						if(T<=time[k])
								used[k]=true;
				}
		}
		string ret="";
		for(int i=0;i<(int)commands.size();i++)		
				if(used[i]==false and commands[i][0]=='t')
					ret+=commands[i][5];											
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
		cout << "Testing Undo (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1401955139;
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
		Undo _obj;
		string _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string commands[] = {"type a", "type b", "type c", "undo 3"};
				int time[] = {1, 2, 3, 5};
				_expected = "a";
				_received = _obj.getText(vector <string>(commands, commands+sizeof(commands)/sizeof(string)), vector <int>(time, time+sizeof(time)/sizeof(int))); break;
			}
			case 1:
			{
				string commands[] = {"type a", "type b", "undo 2", "undo 2"};
				int time[] = {1,2,3,4};
				_expected = "a";
				_received = _obj.getText(vector <string>(commands, commands+sizeof(commands)/sizeof(string)), vector <int>(time, time+sizeof(time)/sizeof(int))); break;
			}
			case 2:
			{
				string commands[] = {"type a", "undo 1", "undo 1"};
				int time[] = {1,2,3};
				_expected = "a";
				_received = _obj.getText(vector <string>(commands, commands+sizeof(commands)/sizeof(string)), vector <int>(time, time+sizeof(time)/sizeof(int))); break;
			}
			case 3:
			{
				string commands[] = {"type a", "type b", "type c", "undo 10"};
				int time[] = {1, 2, 3, 1000};
				_expected = "abc";
				_received = _obj.getText(vector <string>(commands, commands+sizeof(commands)/sizeof(string)), vector <int>(time, time+sizeof(time)/sizeof(int))); break;
			}
			case 4:
			{
				string commands[] = {"undo 1"};
				int time[] = {1};
				_expected = "";
				_received = _obj.getText(vector <string>(commands, commands+sizeof(commands)/sizeof(string)), vector <int>(time, time+sizeof(time)/sizeof(int))); break;
			}
			/*case 5:
			{
				string commands[] = ;
				int time[] = ;
				_expected = ;
				_received = _obj.getText(vector <string>(commands, commands+sizeof(commands)/sizeof(string)), vector <int>(time, time+sizeof(time)/sizeof(int))); break;
			}*/
			/*case 6:
			{
				string commands[] = ;
				int time[] = ;
				_expected = ;
				_received = _obj.getText(vector <string>(commands, commands+sizeof(commands)/sizeof(string)), vector <int>(time, time+sizeof(time)/sizeof(int))); break;
			}*/
			/*case 7:
			{
				string commands[] = ;
				int time[] = ;
				_expected = ;
				_received = _obj.getText(vector <string>(commands, commands+sizeof(commands)/sizeof(string)), vector <int>(time, time+sizeof(time)/sizeof(int))); break;
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
			cout << "           Expected: " << "\"" << _expected << "\"" << endl;
			cout << "           Received: " << "\"" << _received << "\"" << endl;
		}
	}
}

// END CUT HERE
