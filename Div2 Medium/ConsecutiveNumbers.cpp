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










class ConsecutiveNumbers {
	public:
	vector <int> missingNumber(vector <int> numbers) 
	{
			sort(numbers.begin(),numbers.end());
			int status=0,key;
			vector<int> res;
			for(int i=0;i<(int)numbers.size()-1;i++)
					if(numbers[i]+1!=numbers[i+1] and numbers[i]!=numbers[i+1])
					{	status=status+numbers[i+1]-(numbers[i]+1);key=numbers[i]+1;					
					}
					else if(numbers[i]==numbers[i+1])
							return res;
			if(status==0)
						{
							if((numbers[0]-1)>0)
							res.push_back(numbers[0]-1);res.push_back(numbers[numbers.size()-1]+1); }
			if(status==1)
					{	res.push_back(key);}
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
		cout << "Testing ConsecutiveNumbers (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1401589897;
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
		ConsecutiveNumbers _obj;
		vector <int> _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int numbers[] = {10,7,12,8,11};
				int __expected[] = {9 };
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.missingNumber(vector <int>(numbers, numbers+sizeof(numbers)/sizeof(int))); break;
			}
			case 1:
			{
				int numbers[] = {3,6};
				int __expected[] = { };
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.missingNumber(vector <int>(numbers, numbers+sizeof(numbers)/sizeof(int))); break;
			}
			case 2:
			{
				int numbers[] = {5,6,7,8};
				int __expected[] = {4, 9 };
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.missingNumber(vector <int>(numbers, numbers+sizeof(numbers)/sizeof(int))); break;
			}
			case 3:
			{
				int numbers[] = {1000000000};
				int __expected[] = {999999999, 1000000001 };
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.missingNumber(vector <int>(numbers, numbers+sizeof(numbers)/sizeof(int))); break;
			}
			case 4:
			{
				int numbers[] = {1,6,9,3,8,12,7,4,11,5,10};
				int __expected[] = {2 };
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.missingNumber(vector <int>(numbers, numbers+sizeof(numbers)/sizeof(int))); break;
			}
			case 5:
			{
				int numbers[] = {1};
				int __expected[] = {2 };
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.missingNumber(vector <int>(numbers, numbers+sizeof(numbers)/sizeof(int))); break;
			}
			/*case 6:
			{
				int numbers[] = ;
				int __expected[] = ;
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.missingNumber(vector <int>(numbers, numbers+sizeof(numbers)/sizeof(int))); break;
			}*/
			/*case 7:
			{
				int numbers[] = ;
				int __expected[] = ;
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.missingNumber(vector <int>(numbers, numbers+sizeof(numbers)/sizeof(int))); break;
			}*/
			/*case 8:
			{
				int numbers[] = ;
				int __expected[] = ;
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.missingNumber(vector <int>(numbers, numbers+sizeof(numbers)/sizeof(int))); break;
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
			cout << "           Expected: {";
			for (unsigned i = 0; i < _expected.size(); i++)
			{
				if (i) cout << ",";
				cout << " " << _expected[i];
			}
			cout << " }" << endl;
			cout << "           Received: {";
			for (unsigned i = 0; i < _received.size(); i++)
			{
				if (i) cout << ",";
				cout << " " << _received[i];
			}
			cout << " }" << endl;
		}
	}
}

// END CUT HERE
