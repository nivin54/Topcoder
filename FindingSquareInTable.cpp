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










class FindingSquareInTable {
	public:
	string convert2string(long long aux)
	{
		stringstream st;
		st<<aux;
		string res;
		st>>res;
		return res;
	}
	int findMaximalSquare(vector <string> table) 
	{
		map<string,long long> hash;		
		for(long i=0;i*i<=999999999;i++)
		{
				string au=convert2string(i*i);
				hash[au]=i*i+1;		
		}
		int row,column,res=-1;
		row=table.size();column=table[0].length();
		for(int x=0;x<row;x++) 
			for(int y=0;y<column;y++) 
			{
					int X,Y;					
					for(int dx=0;dx<row;dx++) 
						for(int dy=0;dy<column;dy++) 
						{								
								string word[4];
								X=x;Y=y;																
								int dd[4][2]={{1,1},{-1,-1},{1,-1},{-1,1}};
								for(int i=0;i<4;i++)
								{
										X=x;Y=y;	
										while(!(X<0 or Y<0 or Y>=column or X>=row))
												{word[i]+=table[X][Y];
													
													int aux=hash[word[i]];
													if(aux)
														res=max(res,aux);
													if(dx==0 and dx==dy)
														break;
													X+=dx*dd[i][0];Y+=dy*dd[i][1];
												}																				
								}																																																																				
						}
					}
		return res-1;	
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
		cout << "Testing FindingSquareInTable (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1402332723;
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
		FindingSquareInTable _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string table[] = {"123",
				                  "456"};
				_expected = 64;
				_received = _obj.findMaximalSquare(vector <string>(table, table+sizeof(table)/sizeof(string))); break;
			}
			case 1:
			{
				string table[] = {"00000",
				                  "00000",
				                  "00200",
				                  "00000",
				                  "00000"};
				_expected = 0;
				_received = _obj.findMaximalSquare(vector <string>(table, table+sizeof(table)/sizeof(string))); break;
			}
			case 2:
			{
				string table[] = {"3791178",
				                  "1283252",
				                  "4103617",
				                  "8233494",
				                  "8725572",
				                  "2937261"};
				_expected = 320356;
				_received = _obj.findMaximalSquare(vector <string>(table, table+sizeof(table)/sizeof(string))); break;
			}
			case 3:
			{
				string table[] = {"135791357",
				                  "357913579",
				                  "579135791",
				                  "791357913",
				                  "913579135"};
				_expected = 9;
				_received = _obj.findMaximalSquare(vector <string>(table, table+sizeof(table)/sizeof(string))); break;
			}
			case 4:
			{
				string table[] = {"553333733",
				                  "775337775",
				                  "777537775",
				                  "777357333",
				                  "755553557",
				                  "355533335",
				                  "373773573",
				                  "337373777",
				                  "775557777"};
				_expected = -1;
				_received = _obj.findMaximalSquare(vector <string>(table, table+sizeof(table)/sizeof(string))); break;
			}
			case 5:
			{
				string table[] = {"257240281",
				                  "197510846",
				                  "014345401",
				                  "035562575",
				                  "974935632",
				                  "865865933",
				                  "684684987",
				                  "768934659",
				                  "287493867"};
				_expected = 95481;
				_received = _obj.findMaximalSquare(vector <string>(table, table+sizeof(table)/sizeof(string))); break;
			}
			/*case 6:
			{
				string table[] = ;
				_expected = ;
				_received = _obj.findMaximalSquare(vector <string>(table, table+sizeof(table)/sizeof(string))); break;
			}*/
			/*case 7:
			{
				string table[] = ;
				_expected = ;
				_received = _obj.findMaximalSquare(vector <string>(table, table+sizeof(table)/sizeof(string))); break;
			}*/
			/*case 8:
			{
				string table[] = ;
				_expected = ;
				_received = _obj.findMaximalSquare(vector <string>(table, table+sizeof(table)/sizeof(string))); break;
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
			cout << "           Expected: " << _expected << endl;
			cout << "           Received: " << _received << endl;
		}
	}
}

// END CUT HERE
