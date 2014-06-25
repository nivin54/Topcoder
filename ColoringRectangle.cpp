#include<bits/stdc++.h>

#define FOR(i,a,b) for(int i=a;i<b;i++)
#define LOOP(i,a) FOR(i,0,a)

#define SET(p) memset(p, -1, sizeof(p))
#define CLR(p) memset(p, 0, sizeof(p))
#define BIG(p) memset(p, 0x3f, sizeof(p))

#define ll unsigned long long
#define oo (1000000000+7)

#define DEBUG
#ifdef DEBUG
#define deb(args...) {dbg,args; cerr<<endl;}
#else
#define deb(args...) // Just strip off all debug tokens
#endif
struct debugger {
	template<typename T> debugger& operator ,(const T& v) {
		std::cerr << v << " ";
		return *this;
	}
} dbg;

using namespace std;

class ColoringRectangle {
public:
	vector<int> R, B;
	int  bn, rn;
	double W, H;
	pair<double, double> canbeplaced(double tx, double dia) {
		double cx, cy, aux;
		cy = (H / 2.0);
		aux = (dia * dia) / 4.0;
		aux -= (cy) * (cy);
		if (aux < 0)
			return pair<double, double> (-1.0, -1.0);
		double res = (sqrt(aux) + tx);
		return pair<double, double>(res, cy);
	}
	int tryit(int tt) {
		double prex = 0;
		deb( " It is starting here ");
		int cnt = 0, ans = 0;
		int ri = 0, bi = 0, toggle = tt;
		pair<double, double> nxt;
		while (ri < rn or bi < bn) {
			if ((toggle == 0 and ri == rn) or (toggle == 1 and bi == bn))
								break;
			if (toggle == 0)
			{
				nxt = canbeplaced(prex, R[ri]);
				if (nxt.first == -1)
					return 99999999;
				prex = prex + (nxt.first - prex) * 2.0  ;
				toggle = 1 - toggle;
				ri += 1;
				ans += 1;
			} else if (toggle == 1)
			{
				nxt = canbeplaced(prex, B[bi]);
				if (nxt.first == -1)
					return 99999999;
				prex =  prex + (nxt.first - prex) * 2.0;
				toggle = 1 - toggle;
				bi += 1;
				ans += 1;
			}
			if (prex >= (double) W){
				return ans;}
		}
		return 99999999;

	}
	int chooseDisks(int width, int height, vector<int> red, vector<int> blue) {
		sort(red.begin(), red.end(), greater<int>());
		sort(blue.begin(), blue.end(), greater<int>());
		R = red;B = blue;
		W = width;H = height;
		/*Try out by starting it with Red circles*/
		rn = red.size();
		bn = blue.size();
		int res = 99999999;
		res = min(tryit(0), tryit(1));
		return res == 99999999 ? -1 : res;
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
		cout << "Testing ColoringRectangle (550.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++) {
			ostringstream s;
			s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL) - 1403665792;
		double PT = T / 60.0, TT = 75.0;
		cout.setf(ios::fixed, ios::floatfield);
		cout.precision(2);
		cout << endl;
		cout << "Time  : " << T / 60 << " minutes " << T % 60 << " secs"
				<< endl;
		cout << "Score : "
				<< 550.0 * (.3 + (.7 * TT * TT) / (10.0 * PT * PT + TT * TT))
				<< " points" << endl;
	} else {
		int _tc;
		istringstream(argv[1]) >> _tc;
		ColoringRectangle _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc) {
		case 0: {
			int width = 11;
			int height = 3;
			int red[] = { 5, 5 };
			int blue[] = { 2, 5 };
			_expected = 3;
			_received = _obj.chooseDisks(width, height,
					vector<int>(red, red + sizeof(red) / sizeof(int)),
					vector<int>(blue, blue + sizeof(blue) / sizeof(int)));
			break;
		}
		case 1: {
			int width = 30;
			int height = 5;
			int red[] = { 4, 10, 7, 8, 10 };
			int blue[] = { 5, 6, 11, 7, 5 };
			_expected = 4;
			_received = _obj.chooseDisks(width, height,
					vector<int>(red, red + sizeof(red) / sizeof(int)),
					vector<int>(blue, blue + sizeof(blue) / sizeof(int)));
			break;
		}
		case 2: {
			int width = 16;
			int height = 4;
			int red[] = { 6, 5, 7 };
			int blue[] = { 5 };
			_expected = -1;
			_received = _obj.chooseDisks(width, height,
					vector<int>(red, red + sizeof(red) / sizeof(int)),
					vector<int>(blue, blue + sizeof(blue) / sizeof(int)));
			break;
		}
		case 3: {
			int width = 4;
			int height = 4;
			int red[] = { 5 };
			int blue[] = { 6 };
			_expected = 1;
			_received = _obj.chooseDisks(width, height,
					vector<int>(red, red + sizeof(red) / sizeof(int)),
					vector<int>(blue, blue + sizeof(blue) / sizeof(int)));
			break;
		}
		case 4: {
			int width = 6;
			int height = 2;
			int red[] = { 6, 6 };
			int blue[] = { 2 };
			_expected = 3;
			_received = _obj.chooseDisks(width, height,
					vector<int>(red, red + sizeof(red) / sizeof(int)),
					vector<int>(blue, blue + sizeof(blue) / sizeof(int)));
			break;
		}
			/*case 5:
			 {
			 int width = ;
			 int height = ;
			 int red[] = ;
			 int blue[] = ;
			 _expected = ;
			 _received = _obj.chooseDisks(width, height, vector <int>(red, red+sizeof(red)/sizeof(int)), vector <int>(blue, blue+sizeof(blue)/sizeof(int))); break;
			 }*/
			/*case 6:
			 {
			 int width = ;
			 int height = ;
			 int red[] = ;
			 int blue[] = ;
			 _expected = ;
			 _received = _obj.chooseDisks(width, height, vector <int>(red, red+sizeof(red)/sizeof(int)), vector <int>(blue, blue+sizeof(blue)/sizeof(int))); break;
			 }*/
			/*case 7:
			 {
			 int width = ;
			 int height = ;
			 int red[] = ;
			 int blue[] = ;
			 _expected = ;
			 _received = _obj.chooseDisks(width, height, vector <int>(red, red+sizeof(red)/sizeof(int)), vector <int>(blue, blue+sizeof(blue)/sizeof(int))); break;
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
