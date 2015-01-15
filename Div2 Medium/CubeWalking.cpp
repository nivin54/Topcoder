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










class CubeWalking {
	public:
	char rotation [400][400];
	map <char , pair<int,int> > position;
	string domovement(string action)
	{
		char graph[3][5] = { "RBR", "BGB", "RBR" };
		int x, y, len;
		pair<int,int> dx;		
		x = y = 1;
		char D = 'E';
		dx = position[D];
		len = action.length();
		for(int i=0;i < len; ++i)
		{			
			if(action[i] == 'W')
				{
					x = (x + dx.first + 3) % 3;
					y = (y + dx.second + 3) % 3;
														
				}
			else 
			{
				char R = action[i];
				D = rotation[ (int) D][(int) R];
				dx = position[D];												
			}									
		}
		char curr=graph[x][y];
		if(curr == 'R') return "RED";
		if(curr == 'G' ) return "GREEN";	
		return "BLUE";
			
	}
	string finalPosition(string movement) 
	{
		rotation ['E'] ['L'] = 'N'; 
		rotation ['E'] ['R'] = 'S';
		
		rotation ['W'] ['L'] = 'S';
		rotation ['W'] ['R'] = 'N';
		
		rotation ['N'] ['L'] = 'W';
		rotation ['N'] ['R'] = 'E';
		
		rotation ['S'] ['L'] = 'E';
		rotation ['S'] ['R'] = 'W';
		
		position ['E'] = pair<int,int> ( 0, 1 ) ;
		position ['W'] = pair<int,int> ( 0, -1 );
		position ['N'] = pair<int,int> ( -1, 0 );
		position ['S'] = pair<int,int> ( 1, 0 );
		
		return domovement(movement);
		
		
		
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
		cout << "Testing CubeWalking (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1402711321;
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
		CubeWalking _obj;
		string _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string movement = "LLRR";
				_expected = "GREEN";
				_received = _obj.finalPosition(movement); break;
			}
			case 1:
			{
				string movement = "WWWWWWWWWWWW";
				_expected = "GREEN";
				_received = _obj.finalPosition(movement); break;
			}
			case 2:
			{
				string movement = "WLWRW";
				_expected = "RED";
				_received = _obj.finalPosition(movement); break;
			}
			case 3:
			{
				string movement = "WWLLWRWLWLLRWW";
				_expected = "BLUE";
				_received = _obj.finalPosition(movement); break;
			}
			/*case 4:
			{
				string movement = ;
				_expected = ;
				_received = _obj.finalPosition(movement); break;
			}*/
			/*case 5:
			{
				string movement = ;
				_expected = ;
				_received = _obj.finalPosition(movement); break;
			}*/
			/*case 6:
			{
				string movement = ;
				_expected = ;
				_received = _obj.finalPosition(movement); break;
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
