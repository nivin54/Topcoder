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










class BestView {
	public:
	int numberOfBuildings(vector <int> heights) 
	{
		
		int result=0,len=heights.size();
		for(int i=0;i<len;i++)
		{
			double angle=9999999999,c;
			int aux=0;			
			for(int j=i-1;j>=0;j--)
			{							
				c=(double)(heights[i]-heights[j])/(double)(i-j);				
				if(c < angle)
					{aux+=1;angle=c;}								
			
			}	
			angle=9999999999;		
			for(int j=i+1;j<len;j++)
			{
				c=(double)(heights[i]-heights[j])/(double)(j-i);											
				if( c < angle)
					{aux+=1;angle=c;}															
			}
			
			result = max(result, aux);						
		}
		return result;
		
		
		
		
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
		cout << "Testing BestView (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1402389003;
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
		BestView _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int heights[] = {10};
				_expected = 0;
				_received = _obj.numberOfBuildings(vector <int>(heights, heights+sizeof(heights)/sizeof(int))); break;
			}
			case 1:
			{
				int heights[] = {5,5,5,5};
				_expected = 2;
				_received = _obj.numberOfBuildings(vector <int>(heights, heights+sizeof(heights)/sizeof(int))); break;
			}
			case 2:
			{
				int heights[] = {1,2,7,3,2};
				_expected = 4;
				_received = _obj.numberOfBuildings(vector <int>(heights, heights+sizeof(heights)/sizeof(int))); break;
			}
			case 3:
			{
				int heights[] = {1,5,3,2,6,3,2,6,4,2,5,7,3,1,5};
				_expected = 7;
				_received = _obj.numberOfBuildings(vector <int>(heights, heights+sizeof(heights)/sizeof(int))); break;
			}
			case 4:
			{
				int heights[] = {1000000000,999999999,999999998,999999997,999999996,1,2,3,4,5};
				_expected = 6;
				_received = _obj.numberOfBuildings(vector <int>(heights, heights+sizeof(heights)/sizeof(int))); break;
			}
			case 5:
			{
				int heights[] = {244645169,956664793,752259473,577152868,605440232,569378507,111664772,653430457,454612157,397154317};
				_expected = 7;
				_received = _obj.numberOfBuildings(vector <int>(heights, heights+sizeof(heights)/sizeof(int))); break;
			}
			/*case 6:
			{
				int heights[] = ;
				_expected = ;
				_received = _obj.numberOfBuildings(vector <int>(heights, heights+sizeof(heights)/sizeof(int))); break;
			}*/
			/*case 7:
			{
				int heights[] = ;
				_expected = ;
				_received = _obj.numberOfBuildings(vector <int>(heights, heights+sizeof(heights)/sizeof(int))); break;
			}*/
			/*case 8:
			{
				int heights[] = ;
				_expected = ;
				_received = _obj.numberOfBuildings(vector <int>(heights, heights+sizeof(heights)/sizeof(int))); break;
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
