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










class TemplateMatching {
	public:
	int costprefix(string a,string b)
	{
			reverse(b.begin(),b.end());
			int ma=0;
			for(int i=1;i<=(int)b.length() and i<=(int)a.length();i++)
			{
					string auxa,auxb;
					auxa=a.substr(0,i);
					auxb=b.substr(0,i);
					reverse(auxb.begin(),auxb.end());
					if(auxa==auxb)
							ma=i;
			}
			return ma;
	}
	int costsuffix(string a,string b)
	{
		reverse(a.begin(),a.end());
		int ma=0;
		for(int i=1;i<=(int)b.length() and i<=(int)a.length();i++)
		{
			string auxa,auxb;
			auxa=a.substr(0,i);
			auxb=b.substr(0,i);
			reverse(auxa.begin(),auxa.end());
			if(auxa==auxb)
					ma=i;
		}
		return ma;
	}
	string bestMatch(string text, string prefix, string suffix) 
	{
		
		string ans=("z");
		int len=text.length(),ma=0,pre=0;//suf=0;
		for(int i=0;i<len;i++)
			for(int j=i;j<len;j++)
				{
					string subs=text.substr(i,j-(i-1));					
					int a=costprefix(subs,prefix);
					int b=costsuffix(subs,suffix);					
					if(ma==a+b and pre<=a)
					{
							if(pre<a)									
										ans=subs,pre=a;																		
							else if(subs<ans)															
									ans=subs;														
					}	
					else if(ma<a+b)										
							 ans=subs,ma=a+b,pre=a;				
				}
		return ans;							
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
		cout << "Testing TemplateMatching (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1401898609;
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
		TemplateMatching _obj;
		string _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string text = " e mcytuzce u msgh fgi lw quyukw b";
				string prefix = "wapl yulskq";
				string suffix = "abw rv";
				_expected = "q";
				_received = _obj.bestMatch(text, prefix, suffix); break;
			}
			case 1:
			{
				string text = "havka";
				string prefix = "eto";
				string suffix = "papstvo";
				_expected = "a";
				_received = _obj.bestMatch(text, prefix, suffix); break;
			}
			case 2:
			{
				string text = "abracadabra";
				string prefix = "habrahabr";
				string suffix = "bracket";
				_expected = "abrac";
				_received = _obj.bestMatch(text, prefix, suffix); break;
			}
			case 3:
			{
				string text = "mississippi";
				string prefix = "promise";
				string suffix = "piccolo";
				_expected = "ippi";
				_received = _obj.bestMatch(text, prefix, suffix); break;
			}
			case 4:
			{
				string text = "a a a a a a";
				string prefix = "a a";
				string suffix = "a";
				_expected = "a a";
				_received = _obj.bestMatch(text, prefix, suffix); break;
			}
			case 5:
			{
				string text = "ab";
				string prefix = "b";
				string suffix = "a";
				_expected = "b";
				_received = _obj.bestMatch(text, prefix, suffix); break;
			}
			/*case 6:
			{
				string text = ;
				string prefix = ;
				string suffix = ;
				_expected = ;
				_received = _obj.bestMatch(text, prefix, suffix); break;
			}*/
			/*case 7:
			{
				string text = ;
				string prefix = ;
				string suffix = ;
				_expected = ;
				_received = _obj.bestMatch(text, prefix, suffix); break;
			}*/
			/*case 8:
			{
				string text = ;
				string prefix = ;
				string suffix = ;
				_expected = ;
				_received = _obj.bestMatch(text, prefix, suffix); break;
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
			cout << "           Expected: " << "\"" << _expected << "\"" << endl;
			cout << "           Received: " << "\"" << _received << "\"" << endl;
		}
	}
}

// END CUT HERE
