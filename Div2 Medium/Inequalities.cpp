#include<bits/stdc++.h>

#define FOR(i,a,b) for(int i=a;i<b;i++)
#define LOOP(i,a) FOR(i,0,a)

#define SET(p) memset(p, -1, sizeof(p))
#define CLR(p) memset(p, 0, sizeof(p))
#define BIG(p) memset(p, 0x3f, sizeof(p))

#define ll unsigned long long
#define oo (1000000000+7)

using namespace std;
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

class Inequalities {
public:
	bool xgrt(double x, double cons) {
		return (x > cons);

	}
	bool xless(double x, double cons) {
		return (x < cons);

	}
	bool xequal(double x, double cons) {
		return (x == cons);

	}
	bool xgrte(double x, double cons) {
		return (x >= cons);
	}
	bool xlesse(double x, double cons) {
		return (x <= cons);

	}
	string X, condition;
	int cons;
	int s2n(string line) {
		char a[20], b[20];
		int n;
		sscanf(line.c_str(), "%s %s %d", a, b, &cons); /*Note very useful when it comes to parsing of string.*/
		X = string(a);
		condition = string(b);
		return n;
	}
	int maximumSubset(vector<string> inequalities) {
		int len = inequalities.size();
		int res = 0;
		for (double nn = -2; nn <= 1003; nn += 0.5) {
			int ma = 0;
			for (int i = 0; i < len; ++i) {
				s2n(inequalities[i]);
				if (condition == "<")
					ma += xless(nn, cons);
				if (condition == ">")
					ma += xgrt(nn, cons);
				if (condition == "=")
					ma += xequal(nn, cons);
				if (condition == "<=")
					ma += xlesse(nn, cons);
				if (condition == ">=")
					ma += xgrte(nn, cons);
			}
			if (res < ma)
				res = ma;
		}
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
		cout << "Testing Inequalities (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++) {
			ostringstream s;
			s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL) - 1403429934;
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
		Inequalities _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc) {
		case 0: {
			string inequalities[] = { "X <= 12", "X = 13", "X > 9", "X < 10",
					"X >= 14" };
			_expected = 3;
			_received = _obj.maximumSubset(
					vector<string>(inequalities,
							inequalities
									+ sizeof(inequalities) / sizeof(string)));
			break;
		}
		case 1: {
			string inequalities[] = { "X < 0", "X <= 0" };
			_expected = 2;
			_received = _obj.maximumSubset(
					vector<string>(inequalities,
							inequalities
									+ sizeof(inequalities) / sizeof(string)));
			break;
		}
		case 2: {
			string inequalities[] = { "X = 1", "X = 2", "X = 3", "X > 0" };
			_expected = 2;
			_received = _obj.maximumSubset(
					vector<string>(inequalities,
							inequalities
									+ sizeof(inequalities) / sizeof(string)));
			break;
		}
		case 3: {
			string inequalities[] = { "X <= 521", "X >= 521", "X = 521",
					"X > 902", "X > 12", "X <= 1000" };
			_expected = 5;
			_received = _obj.maximumSubset(
					vector<string>(inequalities,
							inequalities
									+ sizeof(inequalities) / sizeof(string)));
			break;
		}
			/*case 4:
			 {
			 string inequalities[] = ;
			 _expected = ;
			 _received = _obj.maximumSubset(vector <string>(inequalities, inequalities+sizeof(inequalities)/sizeof(string))); break;
			 }*/
			/*case 5:
			 {
			 string inequalities[] = ;
			 _expected = ;
			 _received = _obj.maximumSubset(vector <string>(inequalities, inequalities+sizeof(inequalities)/sizeof(string))); break;
			 }*/
			/*case 6:
			 {
			 string inequalities[] = ;
			 _expected = ;
			 _received = _obj.maximumSubset(vector <string>(inequalities, inequalities+sizeof(inequalities)/sizeof(string))); break;
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
