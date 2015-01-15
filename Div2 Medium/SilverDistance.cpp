#include<bits/stdc++.h>

#define FOR(i,a,b) for(int i=a;i<b;i++)
#define LOOP(i,a) FOR(i,0,a)

#define SET(p) memset(p, -1, sizeof(p))
#define CLR(p) memset(p, 0, sizeof(p))
#define BIG(p) memset(p, 0x3f, sizeof(p))

#define ll unsigned long long
#define oo (1000000000+7)

using namespace std;

class SilverDistance {
public:
	int minSteps(int sx, int sy, int gx, int gy)
	{
//		Both cell need to share the same color
		int res = 0;
		if( (abs(sx - gx ) + abs( sy - gy)) % 2 )
				{res +=1; sy++;}
		res += max( abs(sx - gx ), abs(gy - sy) );
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

int main(int argc, char* argv[]) {
	if (argc == 1) {
		cout << "Testing SilverDistance (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++) {
			ostringstream s;
			s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL) - 1403332718;
		double PT = T / 60.0, TT = 75.0;
		cout.setf(ios::fixed, ios::floatfield);
		cout.precision(2);
		cout << endl;
		cout << "Time  : " << T / 60 << " minutes " << T % 60 << " secs"
				<< endl;
		cout << "Score : "
				<< 500.0 * (.3 + (.7 * TT * TT) / (10.0 * PT * PT + TT * TT))
				<< " points" << endl;
	} else {
		int _tc;
		istringstream(argv[1]) >> _tc;
		SilverDistance _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc) {
		case 0: {
			int sx = 1;
			int sy = 0;
			int gx = 1;
			int gy = 9;
			_expected = 9;
			_received = _obj.minSteps(sx, sy, gx, gy);
			break;
		}
		case 1: {
			int sx = 0;
			int sy = 0;
			int gx = -4;
			int gy = 3;
			_expected = 5;
			_received = _obj.minSteps(sx, sy, gx, gy);
			break;
		}
		case 2: {
			int sx = 0;
			int sy = 0;
			int gx = 5;
			int gy = 8;
			_expected = 8;
			_received = _obj.minSteps(sx, sy, gx, gy);
			break;
		}
		case 3: {
			int sx = -487617;
			int sy = 826524;
			int gx = 892309;
			int gy = -918045;
			_expected = 1744571;
			_received = _obj.minSteps(sx, sy, gx, gy);
			break;
		}
		case 4: {
			int sx = -27857;
			int sy = 31475;
			int gx = -27857;
			int gy = 31475;
			_expected = 0;
			_received = _obj.minSteps(sx, sy, gx, gy);
			break;
		}
			/*case 5:
			 {
			 int sx = ;
			 int sy = ;
			 int gx = ;
			 int gy = ;
			 _expected = ;
			 _received = _obj.minSteps(sx, sy, gx, gy); break;
			 }*/
			/*case 6:
			 {
			 int sx = ;
			 int sy = ;
			 int gx = ;
			 int gy = ;
			 _expected = ;
			 _received = _obj.minSteps(sx, sy, gx, gy); break;
			 }*/
			/*case 7:
			 {
			 int sx = ;
			 int sy = ;
			 int gx = ;
			 int gy = ;
			 _expected = ;
			 _received = _obj.minSteps(sx, sy, gx, gy); break;
			 }*/
		default:
			return 0;
		}
		cout.setf(ios::fixed, ios::floatfield);
		cout.precision(2);
		double _elapsed = (double) (clock() - _start) / CLOCKS_PER_SEC;
		if (_received == _expected)
			cout << "#" << _tc << ": Passed (" << _elapsed << " secs)" << endl;
		else {
			cout << "#" << _tc << ": Failed (" << _elapsed << " secs)" << endl;
			cout << "           Expected: " << _expected << endl;
			cout << "           Received: " << _received << endl;
		}
	}
}

// END CUT HERE
