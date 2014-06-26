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

class LotteryCheating {
public:
	int minimalChange(string ID) {
		int digit[10];
		int d = ID.length();
		SET(digit);
		int Min = 19293;
		for (int i = 0; i < 100000; i += 1) {
			long long res = ((long long) i * (long long) i);

			for (int j = 0; j < d ; j += 1) {
				digit[d - 1 - j] = res % 10;
				res /= 10;
			}
			if (res == 0) {
				int aux = 0;
				for (int j = 0; j < d; j += 1)
					if ((ID[j] - '0') != digit[j])
						aux += 1;
				Min = min(Min, aux);
			}


		}
		return Min;

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
		cout << "Testing LotteryCheating (500.0 points)" << endl << endl;
		for (int i = 0; i < 2; i++) {
			ostringstream s;
			s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL) - 1403789481;
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
		LotteryCheating _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc) {
		case 0: {
			string ID = "1";
			_expected = 0;
			_received = _obj.minimalChange(ID);
			break;
		}
		case 1: {
			string ID = "1234";
			_expected = 2;
			_received = _obj.minimalChange(ID);
			break;
		}
		case 2: {
			string ID = "9000000000";
			_expected = 1;
			_received = _obj.minimalChange(ID);
			break;
		}
		case 3: {
			string ID = "4294967296";
			_expected = 0;
			_received = _obj.minimalChange(ID);
			break;
		}
		case 4: {
			string ID = "7654321";
			_expected = 3;
			_received = _obj.minimalChange(ID);
			break;
		}
			/*case 5:
			 {
			 string ID = ;
			 _expected = ;
			 _received = _obj.minimalChange(ID); break;
			 }*/
			/*case 6:
			 {
			 string ID = ;
			 _expected = ;
			 _received = _obj.minimalChange(ID); break;
			 }*/
			/*case 7:
			 {
			 string ID = ;
			 _expected = ;
			 _received = _obj.minimalChange(ID); break;
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
