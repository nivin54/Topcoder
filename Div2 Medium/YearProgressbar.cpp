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










class YearProgressbar {
	public:
	bool leapyear(int yr)
	{
		if(yr%400==0) return 1;
		if(yr%4==0 and yr%100!=0)
				return 1;
		return 0;
	}
	int converttonumber(string aux)
	{
		int number=0;
		for(int i=0;i<(int)aux.length();i++)
				number=number*10+aux[i]-'0';
		return number;
	}	
	double percentage(string currentDate) 
	{
		string m[12]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October","November", "December"};
		int md[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		int year,month,date,hh,tt,auxi,days=365;
		map<string,int> mont;
		for(int i=0;i<12;i++)
			mont[m[i]]=i;
		
		
		auxi=currentDate.find_first_of(" ");
		month=mont[currentDate.substr(0,auxi)];
		currentDate=currentDate.substr(auxi+1);
		//cout<<month<<endl;
		auxi=currentDate.find_first_of(",");
		date=converttonumber(currentDate.substr(0,auxi));
		currentDate=currentDate.substr(auxi+2);
		
		auxi=currentDate.find_first_of(" ");
		year=converttonumber(currentDate.substr(0,auxi));
		currentDate=currentDate.substr(auxi+1);
		
		auxi=currentDate.find_first_of(":");
		hh=converttonumber(currentDate.substr(0,auxi));
		currentDate=currentDate.substr(auxi+1);
		
		tt=converttonumber(currentDate);
		
		days+=leapyear(year);
		double totalmin=days*24*60;				
		cout<<totalmin<<endl;
		double actual=0.0;
		md[1]+=leapyear(year);		
		for(int i=0;i<month;i++)
				actual+=md[i]*24*60;
				
		
		actual+=(date-1)*24*60;
		actual+=hh*60+tt;
		return ((actual/totalmin)*100.00);
		
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
		cout << "Testing YearProgressbar (500.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1401962849;
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
		YearProgressbar _obj;
		double _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string currentDate = "November 13, 2133 05:18";
				_expected = 83.63;
				_received = _obj.percentage(currentDate); break;
			}
			case 1:
			{
				string currentDate = "December 31, 2007 23:59";
				_expected = 99.99980974124807;
				_received = _obj.percentage(currentDate); break;
			}
			case 2:
			{
				string currentDate = "July 02, 2007 12:00";
				_expected = 50.0;
				_received = _obj.percentage(currentDate); break;
			}
			case 3:
			{
				string currentDate = "July 02, 2008 00:00";
				_expected = 50.0;
				_received = _obj.percentage(currentDate); break;
			}
			case 4:
			{
				string currentDate = "May 10, 1981 00:31";
				_expected = 35.348363774733635;
				_received = _obj.percentage(currentDate); break;
			}
			case 5:
			{
				string currentDate = "January 31, 1900 00:47";
				_expected = 8.228120243531203;
				_received = _obj.percentage(currentDate); break;
			}
			/*case 6:
			{
				string currentDate = ;
				_expected = ;
				_received = _obj.percentage(currentDate); break;
			}*/
			/*case 7:
			{
				string currentDate = ;
				_expected = ;
				_received = _obj.percentage(currentDate); break;
			}*/
			/*case 8:
			{
				string currentDate = ;
				_expected = ;
				_received = _obj.percentage(currentDate); break;
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
