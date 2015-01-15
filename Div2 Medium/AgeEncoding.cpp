#include<bits/stdc++.h>

#define FOR(i,a,b) for(int i=a;i<b;i++)
#define LOOP(i,a) FOR(i,0,a)

#define SET(p) memset(p, -1, sizeof(p))
#define CLR(p) memset(p, 0, sizeof(p))
#define BIG(p) memset(p, 0x3f, sizeof(p))

#define ll unsigned long long
#define oo (1000000000+7)
#define eps 0.0000000001

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

class AgeEncoding {
public:
	string candle;
	int len;
	double ag;
	double check(double e) {
		double res = 0.0;
		deb(e, pow(e, 1) + pow(e, 0));
		for (int i = 0; i < len; i++) {
			res += ((double) pow(e, i)
					* (double) ((candle[i] == '1') ? 1.0 : 0.0));
			if (res >= ag)
				return res;
		}
		return res;

	}
	double findx() {
		int ones = count(candle.begin(), candle.end(), '1');
		if (candle[0] == '1' and ag == 1.0) {
			if (ones == 1)
				return -2;
			return -1;
		}
		double res = 0, lo, hi;
		lo = 0;
		hi = 100;
		for (int iter = 0; iter < 500; iter++) {
			double mid = (lo + hi) / 2.00;
			if (check(mid) > ag)
				hi = mid;
			else
				lo = mid;

		}
		if (abs(check(lo) - ag) <= eps)
			return lo;
		return -1.0;

	}
	double getRadix(int age, string candlesLine) {
		ag = age;
		candle = candlesLine;
		reverse(candle.begin(), candle.end());
		len = candle.size();
		return findx();

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
		cout << "Testing AgeEncoding (500.0 points)" << endl << endl;
		for (int i = 0; i < 1; i++) {
			ostringstream s;
			s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL) - 1403713349;
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
		AgeEncoding _obj;
		double _expected, _received;
		time_t _start = clock();
		switch (_tc) {
		case 0: {
			int age = 1;
			string candlesLine = "11";
			_expected = -1.0;
			_received = _obj.getRadix(age, candlesLine);
			break;
		}
		case 1: {
			int age = 21;
			string candlesLine = "10101";
			_expected = 2.0;
			_received = _obj.getRadix(age, candlesLine);
			break;
		}
		case 2: {
			int age = 6;
			string candlesLine = "10100";
			_expected = 1.414213562373095;
			_received = _obj.getRadix(age, candlesLine);
			break;
		}
		case 3: {
			int age = 21;
			string candlesLine =
					"10111111110111101111111100111111110111111111111100";
			_expected = 0.9685012944510603;
			_received = _obj.getRadix(age, candlesLine);
			break;
		}
		case 4: {
			int age = 16;
			string candlesLine = "1";
			_expected = -1.0;
			_received = _obj.getRadix(age, candlesLine);
			break;
		}
		case 5: {
			int age = 1;
			string candlesLine = "1";
			_expected = -2.0;
			_received = _obj.getRadix(age, candlesLine);
			break;
		}
		case 6: {
			int age = 1;
			string candlesLine = "001000";
			_expected = 1.0;
			_received = _obj.getRadix(age, candlesLine);
			break;
		}
			/*case 7:
			 {
			 int age = ;
			 string candlesLine = ;
			 _expected = ;
			 _received = _obj.getRadix(age, candlesLine); break;
			 }*/
			/*case 8:
			 {
			 int age = ;
			 string candlesLine = ;
			 _expected = ;
			 _received = _obj.getRadix(age, candlesLine); break;
			 }*/
			/*case 9:
			 {
			 int age = ;
			 string candlesLine = ;
			 _expected = ;
			 _received = _obj.getRadix(age, candlesLine); break;
			 }*/
		default:
			return 0;
		}
		cout.setf(ios::fixed, ios::floatfield);
		cout.precision(2);
		double _elapsed = (double) (clock() - _start) / CLOCKS_PER_SEC;
		if (abs(_expected - _received) < 1e-9
				|| (_received
						> min(_expected * (1.0 - 1e-9),
								_expected * (1.0 + 1e-9))
						&& _received
								< max(_expected * (1.0 - 1e-9),
										_expected * (1.0 + 1e-9))))
			cout << "#" << _tc << ": Passed (" << _elapsed << " secs)" << endl;
		else {
			cout << "#" << _tc << ": Failed (" << _elapsed << " secs)" << endl;
			cout.precision(10);
			cout << "           Expected: " << _expected << endl;
			cout << "           Received: " << _received << endl;
		}
	}
}

// END CUT HERE
