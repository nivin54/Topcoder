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










class PrimeSoccer {
	public:
	int c[28][28];
	double getProbability(int skillOfTeamA, int skillOfTeamB) 
	{
		
		memset(c,0,sizeof(c));
		c[0][0]=1;
		for(int i=1;i<=18;i++)
		{
			c[i][0]=1;	
			for(int j=1;j<=i;j++)			
				c[i][j]=c[i-1][j]+c[i-1][j-1];								
		}
		double a=skillOfTeamA/100.00;
		double b=skillOfTeamB/100.00;
		double ansa,ansb;
		ansa=ansb=0;
		int prime[8]={2,3,5,7,11,13,17};
		for(int i=0;i<7;i++)
		{
		
			ansa+=fo(a,prime[i]);
			ansb+=fo(b,prime[i]);
		}
		return ansa+ansb-ansa*ansb;		
	}
	double fo(double a,int k)
	{
		cout<<k<<" "<<c[18][k]<<endl;
		return ((double)(c[18][k])*pow(a,k)*pow((1.00-a),18-k));
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
		cout << "Testing PrimeSoccer (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1401971013;
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
		PrimeSoccer _obj;
		double _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int skillOfTeamA = 50;
				int skillOfTeamB = 50;
				_expected = 0.5265618908306351;
				_received = _obj.getProbability(skillOfTeamA, skillOfTeamB); break;
			}
			case 1:
			{
				int skillOfTeamA = 100;
				int skillOfTeamB = 100;
				_expected = 0.0;
				_received = _obj.getProbability(skillOfTeamA, skillOfTeamB); break;
			}
			case 2:
			{
				int skillOfTeamA = 12;
				int skillOfTeamB = 89;
				_expected = 0.6772047168840167;
				_received = _obj.getProbability(skillOfTeamA, skillOfTeamB); break;
			}
			/*case 3:
			{
				int skillOfTeamA = ;
				int skillOfTeamB = ;
				_expected = ;
				_received = _obj.getProbability(skillOfTeamA, skillOfTeamB); break;
			}*/
			/*case 4:
			{
				int skillOfTeamA = ;
				int skillOfTeamB = ;
				_expected = ;
				_received = _obj.getProbability(skillOfTeamA, skillOfTeamB); break;
			}*/
			/*case 5:
			{
				int skillOfTeamA = ;
				int skillOfTeamB = ;
				_expected = ;
				_received = _obj.getProbability(skillOfTeamA, skillOfTeamB); break;
			}*/
			default: return 0;
		}
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		double _elapsed = (double)(clock()-_start)/CLOCKS_PER_SEC;
		if (abs(_expected-_received) < 1e-9 || (_received > min(_expected*(1.0-1e-9), _expected*(1.0+1e-9)) && _received < max(_expected*(1.0-1e-9), _expected*(1.0+1e-9))))
			cout << "#" << _tc << ": Passed (" << _elapsed << " secs)" << endl;
		else
		{
			cout << "#" << _tc << ": Failed (" << _elapsed << " secs)" << endl;
			cout.precision(10);
			cout << "           Expected: " << _expected << endl;
			cout << "           Received: " << _received << endl;
		}
	}
}

// END CUT HERE
