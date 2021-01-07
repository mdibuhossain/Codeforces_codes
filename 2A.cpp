//#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <deque>
#include <iterator>
#include <bitset>
#include <assert.h>
#include <new>
#include <sstream>
#include <time.h>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#define READ()		freopen("input", "r", stdin)
#define WRITE()		freopen("output", "w", stdout)
#define TIME()		fprintf(stderr,"Runtime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC)
#define CLOCK()		clock_t tStart = clock()
using namespace std;
using ll = long long int;



// ll funFactorial(ll n) {if (n == 0) return 1;return n * funFactorial(n - 1);}

//--------------------GCD_Start---------------
/*
int GCD(int n1, int n2)
{
	if(n2)
		return GCD(n2, n1%n2);
	return n1;
}
*/
//--------------------GCD_End-----------------


// --------------Seive_Prime_Start------------
/*
bool prime[100000000];
ll isPrime(ll n)
{
	if(n < 2) return false;
	return prime[n];
}
void seive(ll n)
{
	for(ll i = 2; i <= n; i++)
		if(prime[i])
		{
			for(ll j = i * i; j <= n; j += i)
				prime[j] = false;
		}
}
*/
// --------------Seive_Prime_Start------------

bool cmpr(pair<string, int>& a, pair<string, int>& b)
{
	return a.second > b.second;
}

void sort_(map<string, int>& MP)
{
	vector<pair<string, int> >VT;

	for(auto it: MP)
		VT.push_back(it);

	sort(VT.begin(), VT.end(), cmpr);
	return;
}


int main()
{
	#ifndef ONLINE_JUDGE
		CLOCK();
		//READ();
		//WRITE();
	#endif
//---------------------------code_start_from_here-------------------------



	int t;
	int mn = -1e6;
	cin >> t;
	map<string, int> mp;
	vector<pair<string, int>> vt;
	for(int i = 0; i < t; ++i)
	{
		string st;
		int m;
		cin >> st;
		cin >> m;
		vt.push_back({st, m});
		mp[st] += m;
	}
	
	for(auto it: mp)
		mn = max(mn, it.second);

	map<string, int>mp2;
	for(int i = 0; i < t; ++i)
	{
		mp2[vt[i].first] += vt[i].second;
		if(mp[vt[i].first] >= mn && mp2[vt[i].first] >= mn)
		{
			cout << vt[i].first << endl;
			break;
		}
	}

	// cout << mp.begin()->first << endl;


//---------------------------code_finished--------------------------------

	#ifndef ONLINE_JUDGE
		TIME();
	#endif
	return 0;
}