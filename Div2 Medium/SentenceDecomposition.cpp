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










class SentenceDecomposition {
	public:
	int dp[55],len;
	string word;
	vector<string> validword;
	bool canmatch(int index,string words)
	{
			string aux;
		for(int i=index;i<min((index+(int)words.length()),len);i++)
							aux+=word[i];
		sort(aux.begin(),aux.end());
		sort(words.begin(),words.end());
		if(aux==words)
					return 1;
		return 0;
	}			
	int costmatch(int index,string words)
	{
				int cost=0;
				for(int i=index,j=0;i<len and j<(int)words.length();i++,j++)
						if(words[j]!=word[i])
								cost+=1;				
				return cost;
	}						
	int run(int index)
	{
		int &res=dp[index];
		if(index==len)
				return 0;
		if(res!=-1)
				return res;
		res=999999999;
		for(int i=0;i<(int)validword.size();i++)
				if(canmatch(index,validword[i]))					
					res=min(res,costmatch(index,validword[i])+run(index+validword[i].length()));
		return res;
	}	
	int decompose(string sentence, vector <string> validWords) 
	{
		word=sentence;
		validword=validWords;
		len=sentence.length();
		memset(dp,-1,sizeof(dp));
		return run(0)==999999999?-1:run(0);
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
		cout << "Testing SentenceDecomposition (600.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1401683154;
		double PT = T/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl;
		cout << "Time  : " << T/60 << " minutes " << T%60 << " secs" << endl;
		cout << "Score : " << 600.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points" << endl;
	}
	else
	{
		int _tc; istringstream(argv[1]) >> _tc;
		SentenceDecomposition _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string sentence = "neotowheret";
				string validWords[] = {"one", "two", "three", "there"};
				_expected = 8;
				_received = _obj.decompose(sentence, vector <string>(validWords, validWords+sizeof(validWords)/sizeof(string))); break;
			}
			case 1:
			{
				string sentence = "abba";
				string validWords[] = {"ab", "ac", "ad"};
				_expected = 2;
				_received = _obj.decompose(sentence, vector <string>(validWords, validWords+sizeof(validWords)/sizeof(string))); break;
			}
			case 2:
			{
				string sentence = "thisismeaningless";
				string validWords[] = {"this", "is", "meaningful"};
				_expected = -1;
				_received = _obj.decompose(sentence, vector <string>(validWords, validWords+sizeof(validWords)/sizeof(string))); break;
			}
			case 3:
			{
				string sentence = "ommwreehisymkiml";
				string validWords[] = {"we", "were", "here", "my", "is", "mom", "here", "si", "milk", "where", "si"};
				_expected = 10;
				_received = _obj.decompose(sentence, vector <string>(validWords, validWords+sizeof(validWords)/sizeof(string))); break;
			}
			case 4:
			{
				string sentence = "ogodtsneeencs";
				string validWords[] = {"go", "good", "do", "sentences", "tense", "scen"};
				_expected = 8;
				_received = _obj.decompose(sentence, vector <string>(validWords, validWords+sizeof(validWords)/sizeof(string))); break;
			}
			case 5:
			{
				string sentence = "sepawaterords";
				string validWords[] = {"separate","words"};
				_expected = -1;
				_received = _obj.decompose(sentence, vector <string>(validWords, validWords+sizeof(validWords)/sizeof(string))); break;
			}
			/*case 6:
			{
				string sentence = ;
				string validWords[] = ;
				_expected = ;
				_received = _obj.decompose(sentence, vector <string>(validWords, validWords+sizeof(validWords)/sizeof(string))); break;
			}*/
			/*case 7:
			{
				string sentence = ;
				string validWords[] = ;
				_expected = ;
				_received = _obj.decompose(sentence, vector <string>(validWords, validWords+sizeof(validWords)/sizeof(string))); break;
			}*/
			/*case 8:
			{
				string sentence = ;
				string validWords[] = ;
				_expected = ;
				_received = _obj.decompose(sentence, vector <string>(validWords, validWords+sizeof(validWords)/sizeof(string))); break;
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
