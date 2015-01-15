#include<bits/stdc++.h>

#define FOR(i,a,b) for(int i=a;i<b;i++)
#define LOOP(i,a) FOR(i,0,a)

#define SET(p) memset(p, -1, sizeof(p))
#define CLR(p) memset(p, 0, sizeof(p))
#define BIG(p) memset(p, 0x3f, sizeof(p))

#define ll unsigned long long
#define oo (1000000000+7)

using namespace std;

class TheFansAndMeetingsDivTwo {
public:
	double find(vector<int> minJ, vector<int> maxJ, vector<int> minB,
			vector<int> maxB) {
		double res = 0.0, pc;
		int len = minJ.size();
		pc = 1.0 / double(len);
		for (int fan = 1; fan <= 50; fan += 1) {
			for (int j = 0; j < len; j += 1) {
				if (minJ[j] <= fan && fan <= maxJ[j]) {
					double jj = 1.0 / double(maxJ[j] - minJ[j] + 1);
					for (int b = 0; b < len; b += 1) {
						if (minB[b] <= fan && fan <= maxB[b]) {
							double bb = 1.0 / double(maxB[b] - minB[b] + 1);
							res += (pc * pc * jj * bb);

						}
					}
				}

			}

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
		cout << "Testing TheFansAndMeetingsDivTwo (500.0 points)" << endl
				<< endl;
		for (int i = 0; i < 20; i++) {
			ostringstream s;
			s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL) - 1403440905;
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
		TheFansAndMeetingsDivTwo _obj;
		double _expected, _received;
		time_t _start = clock();
		switch (_tc) {
		case 0: {
			int minJ[] = { 1 };
			int maxJ[] = { 3 };
			int minB[] = { 1 };
			int maxB[] = { 1 };
			_expected = 0.3333333333333333;
			_received = _obj.find(
					vector<int>(minJ, minJ + sizeof(minJ) / sizeof(int)),
					vector<int>(maxJ, maxJ + sizeof(maxJ) / sizeof(int)),
					vector<int>(minB, minB + sizeof(minB) / sizeof(int)),
					vector<int>(maxB, maxB + sizeof(maxB) / sizeof(int)));
			break;
		}
		case 1: {
			int minJ[] = { 5, 7, 7, 1, 6, 1, 1 };
			int maxJ[] = { 8, 9, 7, 3, 9, 5, 3 };
			int minB[] = { 9, 12, 10, 14, 50, 9, 10 };
			int maxB[] = { 9, 13, 50, 15, 50, 12, 11 };
			_expected = 0.014880952380952378;
			_received = _obj.find(
					vector<int>(minJ, minJ + sizeof(minJ) / sizeof(int)),
					vector<int>(maxJ, maxJ + sizeof(maxJ) / sizeof(int)),
					vector<int>(minB, minB + sizeof(minB) / sizeof(int)),
					vector<int>(maxB, maxB + sizeof(maxB) / sizeof(int)));
			break;
		}
		case 2: {
			int minJ[] = { 44 };
			int maxJ[] = { 47 };
			int minB[] = { 4 };
			int maxB[] = { 7 };
			_expected = 0.0;
			_received = _obj.find(
					vector<int>(minJ, minJ + sizeof(minJ) / sizeof(int)),
					vector<int>(maxJ, maxJ + sizeof(maxJ) / sizeof(int)),
					vector<int>(minB, minB + sizeof(minB) / sizeof(int)),
					vector<int>(maxB, maxB + sizeof(maxB) / sizeof(int)));
			break;
		}
		case 3: {
			int minJ[] = { 1, 6, 3, 1, 4, 3, 5, 1 };
			int maxJ[] = { 7, 8, 5, 7, 9, 7, 9, 3 };
			int minB[] = { 5, 1, 5, 3, 1, 2, 4, 1 };
			int maxB[] = { 9, 2, 7, 9, 4, 5, 4, 9 };
			_expected = 0.11562305130385474;
			_received = _obj.find(
					vector<int>(minJ, minJ + sizeof(minJ) / sizeof(int)),
					vector<int>(maxJ, maxJ + sizeof(maxJ) / sizeof(int)),
					vector<int>(minB, minB + sizeof(minB) / sizeof(int)),
					vector<int>(maxB, maxB + sizeof(maxB) / sizeof(int)));
			break;
		}
			/*case 4:
			 {
			 int minJ[] = ;
			 int maxJ[] = ;
			 int minB[] = ;
			 int maxB[] = ;
			 _expected = ;
			 _received = _obj.find(vector <int>(minJ, minJ+sizeof(minJ)/sizeof(int)), vector <int>(maxJ, maxJ+sizeof(maxJ)/sizeof(int)), vector <int>(minB, minB+sizeof(minB)/sizeof(int)), vector <int>(maxB, maxB+sizeof(maxB)/sizeof(int))); break;
			 }*/
			/*case 5:
			 {
			 int minJ[] = ;
			 int maxJ[] = ;
			 int minB[] = ;
			 int maxB[] = ;
			 _expected = ;
			 _received = _obj.find(vector <int>(minJ, minJ+sizeof(minJ)/sizeof(int)), vector <int>(maxJ, maxJ+sizeof(maxJ)/sizeof(int)), vector <int>(minB, minB+sizeof(minB)/sizeof(int)), vector <int>(maxB, maxB+sizeof(maxB)/sizeof(int))); break;
			 }*/
			/*case 6:
			 {
			 int minJ[] = ;
			 int maxJ[] = ;
			 int minB[] = ;
			 int maxB[] = ;
			 _expected = ;
			 _received = _obj.find(vector <int>(minJ, minJ+sizeof(minJ)/sizeof(int)), vector <int>(maxJ, maxJ+sizeof(maxJ)/sizeof(int)), vector <int>(minB, minB+sizeof(minB)/sizeof(int)), vector <int>(maxB, maxB+sizeof(maxB)/sizeof(int))); break;
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
