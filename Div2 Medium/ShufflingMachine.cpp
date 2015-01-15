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



class ShufflingMachine {
	public:
	double stackDeck(vector <int> shuffle, int maxShuffles, vector <int> cardsReceived, int K) 
	{
		int occurence[55],copyo[55],proboccurence[55],sz;
		sz=shuffle.size();
		memset(proboccurence,0,sizeof(proboccurence));		
		for(int i=0;i<sz;i++){
			occurence[i]=i;copyo[i]=i;}
		for(int i=0;i<maxShuffles;i++)
		{				
				for(int j=0;j<sz;j++)
					occurence[shuffle[j]]=copyo[j];
				for(int j=0;j<sz;j++)
					 copyo[j]=occurence[j];
							
				for(int k=0;k<(int)cardsReceived.size();k++)
						proboccurence[copyo[cardsReceived[k]]]+=1;
		}
		sort(proboccurence,proboccurence+sz,greater<int>());
		double sum=0.0;
		for(int k=0;k<K;k++)					
				sum+=((double)proboccurence[k]/(double)maxShuffles);
		
		return sum;
		
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
		cout << "Testing ShufflingMachine (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1402109204;
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
		ShufflingMachine _obj;
		double _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int shuffle[] = {1,0};
				int maxShuffles = 3;
				int cardsReceived[] = {0};
				int K = 1;
				_expected = 0.6666666666666666;
				_received = _obj.stackDeck(vector <int>(shuffle, shuffle+sizeof(shuffle)/sizeof(int)), maxShuffles, vector <int>(cardsReceived, cardsReceived+sizeof(cardsReceived)/sizeof(int)), K); break;
			}
			case 1:
			{
				int shuffle[] = {1,2,0};
				int maxShuffles = 5;
				int cardsReceived[] = {0};
				int K = 2;
				_expected = 0.8;
				_received = _obj.stackDeck(vector <int>(shuffle, shuffle+sizeof(shuffle)/sizeof(int)), maxShuffles, vector <int>(cardsReceived, cardsReceived+sizeof(cardsReceived)/sizeof(int)), K); break;
			}
			case 2:
			{
				int shuffle[] = {1,2,0,4,3};
				int maxShuffles = 7;
				int cardsReceived[] = {0,3};
				int K = 2;
				_expected = 1.0;
				_received = _obj.stackDeck(vector <int>(shuffle, shuffle+sizeof(shuffle)/sizeof(int)), maxShuffles, vector <int>(cardsReceived, cardsReceived+sizeof(cardsReceived)/sizeof(int)), K); break;
			}
			case 3:
			{
				int shuffle[] = {0,4,3,5,2,6,1};
				int maxShuffles = 19;
				int cardsReceived[] = {1,3,5};
				int K = 2;
				_expected = 1.0526315789473684;
				_received = _obj.stackDeck(vector <int>(shuffle, shuffle+sizeof(shuffle)/sizeof(int)), maxShuffles, vector <int>(cardsReceived, cardsReceived+sizeof(cardsReceived)/sizeof(int)), K); break;
			}
			case 4:
			{
				int shuffle[] = {3,4,7,2,8,5,6,1,0,9};
				int maxShuffles = 47;
				int cardsReceived[] = {6,3,5,2,8,7,4};
				int K = 8;
				_expected = 6.297872340425532;
				_received = _obj.stackDeck(vector <int>(shuffle, shuffle+sizeof(shuffle)/sizeof(int)), maxShuffles, vector <int>(cardsReceived, cardsReceived+sizeof(cardsReceived)/sizeof(int)), K); break;
			}
			/*case 5:
			{
				int shuffle[] = ;
				int maxShuffles = ;
				int cardsReceived[] = ;
				int K = ;
				_expected = ;
				_received = _obj.stackDeck(vector <int>(shuffle, shuffle+sizeof(shuffle)/sizeof(int)), maxShuffles, vector <int>(cardsReceived, cardsReceived+sizeof(cardsReceived)/sizeof(int)), K); break;
			}*/
			/*case 6:
			{
				int shuffle[] = ;
				int maxShuffles = ;
				int cardsReceived[] = ;
				int K = ;
				_expected = ;
				_received = _obj.stackDeck(vector <int>(shuffle, shuffle+sizeof(shuffle)/sizeof(int)), maxShuffles, vector <int>(cardsReceived, cardsReceived+sizeof(cardsReceived)/sizeof(int)), K); break;
			}*/
			/*case 7:
			{
				int shuffle[] = ;
				int maxShuffles = ;
				int cardsReceived[] = ;
				int K = ;
				_expected = ;
				_received = _obj.stackDeck(vector <int>(shuffle, shuffle+sizeof(shuffle)/sizeof(int)), maxShuffles, vector <int>(cardsReceived, cardsReceived+sizeof(cardsReceived)/sizeof(int)), K); break;
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
