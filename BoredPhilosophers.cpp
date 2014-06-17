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










class BoredPhilosophers {
	public:
	vector <int> simulate(vector <string> text, int N) 
	{
		vector<string> words;
		vector<int> res;		
		string texts;
		for(int i=0 ; i < (int) text.size(); ++i )
				texts += text[i];							
		while ( 1 )
		{
							int index = texts.find(' ');
							string temp;
							if(index == (int)string::npos)	
							{	words.push_back(texts);		
								break;}
							temp = texts.substr(0,index);
							texts = texts.substr(index+1);	
							words.push_back(temp);					
		}														
		int sz = words.size();
		for(int i = 1 ; i <= N ; ++i)
		{
			set<string> hash;
			for(int j = 0 ; j < sz ; ++j)
			{
				string uword;
				uword = "";	
				for(int k = j ; k < j+i and j+i <= sz ; k++)								
				{
						uword += words[k];
						if(k+1 != j+i)
								uword += " ";					
				}
				if( j+i <= sz )
				hash.insert(uword);								
			}			
			res.push_back(hash.size());			
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

int main(int argc, char* argv[])
{
	if (argc == 1) 
	{
		cout << "Testing BoredPhilosophers (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1403009870;
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
		BoredPhilosophers _obj;
		vector <int> _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string text[] = {"hello world"};
				int N = 2;
				int __expected[] = {2, 1 };
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.simulate(vector <string>(text, text+sizeof(text)/sizeof(string)), N); break;
			}
			case 1:
			{
				string text[] = {"aaa bbb aaa bbb aaa aaa"};
				int N = 4;
				int __expected[] = {2, 3, 3, 3 };
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.simulate(vector <string>(text, text+sizeof(text)/sizeof(string)), N); break;
			}
			case 2:
			{
				string text[] = {"remember"," t","o concatenate ","the"," ","text"};
				int N = 1;
				int __expected[] = {5 };
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.simulate(vector <string>(text, text+sizeof(text)/sizeof(string)), N); break;
			}
			case 3:
			{
				string text[] = {"a a a a a a a b a a b a a a b b a b a a a b a b"};
				int N = 6;
				int __expected[] = {2, 4, 7, 11, 14, 17 };
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.simulate(vector <string>(text, text+sizeof(text)/sizeof(string)), N); break;
			}
			case 4:
			{
				string text[] = {"aa ababaa c cbbcbc cabcbcb ba bccc ababb",
				                 "c cabcba caa ababaa c cbbcbc cabcbcb ba ",
				                 "bccc ababbc cabcba c bbcbab",
				                 "b aaaa cbccaaa bccc ababbc cabcba c bbcb",
				                 "ab cbcaca"};
				int N = 7;
				int __expected[] = {15, 17, 18, 19, 20, 20, 20 };
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.simulate(vector <string>(text, text+sizeof(text)/sizeof(string)), N); break;
			}
			/*case 5:
			{
				string text[] = ;
				int N = ;
				int __expected[] = ;
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.simulate(vector <string>(text, text+sizeof(text)/sizeof(string)), N); break;
			}*/
			/*case 6:
			{
				string text[] = ;
				int N = ;
				int __expected[] = ;
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.simulate(vector <string>(text, text+sizeof(text)/sizeof(string)), N); break;
			}*/
			/*case 7:
			{
				string text[] = ;
				int N = ;
				int __expected[] = ;
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.simulate(vector <string>(text, text+sizeof(text)/sizeof(string)), N); break;
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
