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










class FeudaliasBattle {
	public:
	double getMinimumTime(vector <int> baseX, vector <int> baseY, vector <int> siloX, vector <int> siloY, int takeOffTime, int rechargeTime, int missileSpeed) 
	{
		double sb[4][4],tt,re,ss;
		tt=takeOffTime/60.0;re=rechargeTime;ss=missileSpeed;
		for(int i=0;i<2;i++)
			for(int j=0;j<2;j++)
			{
					double x,y;
					x=baseX[j]-siloX[i];
					y=baseY[j]-siloY[i];
					sb[i][j]=sqrt(x*x+y*y)/ss;											
			}
		double res=min(max(sb[0][1]+tt,sb[1][0]+tt),max(sb[0][0]+tt,sb[1][1]+tt));
		res=min(res,max(tt*2+re+sb[0][1],tt+sb[0][0]));
		res=min(res,max(tt*2+re+sb[0][0],tt+sb[0][1]));
		res=min(res,max(tt*2+re+sb[1][1],tt+sb[1][0]));
		res=min(res,max(tt*2+re+sb[1][0],tt+sb[1][1]));
		return res;
		
		
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
		cout << "Testing FeudaliasBattle (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1402413893;
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
		FeudaliasBattle _obj;
		double _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int baseX[] = {100, 500};
				int baseY[] = {100, 100};
				int siloX[] = {100, 500};
				int siloY[] = {300, 300};
				int takeOffTime = 6;
				int rechargeTime = 10;
				int missileSpeed = 1;
				_expected = 200.1;
				_received = _obj.getMinimumTime(vector <int>(baseX, baseX+sizeof(baseX)/sizeof(int)), vector <int>(baseY, baseY+sizeof(baseY)/sizeof(int)), vector <int>(siloX, siloX+sizeof(siloX)/sizeof(int)), vector <int>(siloY, siloY+sizeof(siloY)/sizeof(int)), takeOffTime, rechargeTime, missileSpeed); break;
			}
			case 1:
			{
				int baseX[] = {100, 100};
				int baseY[] = {100, 500};
				int siloX[] = {100, 500};
				int siloY[] = {300, 300};
				int takeOffTime = 6;
				int rechargeTime = 10;
				int missileSpeed = 1;
				_expected = 210.2;
				_received = _obj.getMinimumTime(vector <int>(baseX, baseX+sizeof(baseX)/sizeof(int)), vector <int>(baseY, baseY+sizeof(baseY)/sizeof(int)), vector <int>(siloX, siloX+sizeof(siloX)/sizeof(int)), vector <int>(siloY, siloY+sizeof(siloY)/sizeof(int)), takeOffTime, rechargeTime, missileSpeed); break;
			}
			case 2:
			{
				int baseX[] = {100, 100};
				int baseY[] = {100, 500};
				int siloX[] = {100, 500};
				int siloY[] = {300, 300};
				int takeOffTime = 6;
				int rechargeTime = 20;
				int missileSpeed = 20;
				_expected = 22.4606797749979;
				_received = _obj.getMinimumTime(vector <int>(baseX, baseX+sizeof(baseX)/sizeof(int)), vector <int>(baseY, baseY+sizeof(baseY)/sizeof(int)), vector <int>(siloX, siloX+sizeof(siloX)/sizeof(int)), vector <int>(siloY, siloY+sizeof(siloY)/sizeof(int)), takeOffTime, rechargeTime, missileSpeed); break;
			}
			case 3:
			{
				int baseX[] = {401, 208};
				int baseY[] = {622, 603};
				int siloX[] = {51, 387};
				int siloY[] = {411, 828};
				int takeOffTime = 59;
				int rechargeTime = 518;
				int missileSpeed = 1941;
				_expected = 1.1111118724871378;
				_received = _obj.getMinimumTime(vector <int>(baseX, baseX+sizeof(baseX)/sizeof(int)), vector <int>(baseY, baseY+sizeof(baseY)/sizeof(int)), vector <int>(siloX, siloX+sizeof(siloX)/sizeof(int)), vector <int>(siloY, siloY+sizeof(siloY)/sizeof(int)), takeOffTime, rechargeTime, missileSpeed); break;
			}
			/*case 4:
			{
				int baseX[] = ;
				int baseY[] = ;
				int siloX[] = ;
				int siloY[] = ;
				int takeOffTime = ;
				int rechargeTime = ;
				int missileSpeed = ;
				_expected = ;
				_received = _obj.getMinimumTime(vector <int>(baseX, baseX+sizeof(baseX)/sizeof(int)), vector <int>(baseY, baseY+sizeof(baseY)/sizeof(int)), vector <int>(siloX, siloX+sizeof(siloX)/sizeof(int)), vector <int>(siloY, siloY+sizeof(siloY)/sizeof(int)), takeOffTime, rechargeTime, missileSpeed); break;
			}*/
			/*case 5:
			{
				int baseX[] = ;
				int baseY[] = ;
				int siloX[] = ;
				int siloY[] = ;
				int takeOffTime = ;
				int rechargeTime = ;
				int missileSpeed = ;
				_expected = ;
				_received = _obj.getMinimumTime(vector <int>(baseX, baseX+sizeof(baseX)/sizeof(int)), vector <int>(baseY, baseY+sizeof(baseY)/sizeof(int)), vector <int>(siloX, siloX+sizeof(siloX)/sizeof(int)), vector <int>(siloY, siloY+sizeof(siloY)/sizeof(int)), takeOffTime, rechargeTime, missileSpeed); break;
			}*/
			/*case 6:
			{
				int baseX[] = ;
				int baseY[] = ;
				int siloX[] = ;
				int siloY[] = ;
				int takeOffTime = ;
				int rechargeTime = ;
				int missileSpeed = ;
				_expected = ;
				_received = _obj.getMinimumTime(vector <int>(baseX, baseX+sizeof(baseX)/sizeof(int)), vector <int>(baseY, baseY+sizeof(baseY)/sizeof(int)), vector <int>(siloX, siloX+sizeof(siloX)/sizeof(int)), vector <int>(siloY, siloY+sizeof(siloY)/sizeof(int)), takeOffTime, rechargeTime, missileSpeed); break;
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
