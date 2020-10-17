/*
 ██▓ ▄▄▄▄    ██▀███   ▄▄▄       ██░ ██  ██▓ ███▄ ▄███▓
▓██▒▓█████▄ ▓██ ▒ ██▒▒████▄    ▓██░ ██▒▓██▒▓██▒▀█▀ ██▒
▒██▒▒██▒ ▄██▓██ ░▄█ ▒▒██  ▀█▄  ▒██▀▀██░▒██▒▓██    ▓██░
░██░▒██░█▀  ▒██▀▀█▄  ░██▄▄▄▄██ ░▓█ ░██ ░██░▒██    ▒██ 
░██░░▓█  ▀█▓░██▓ ▒██▒ ▓█   ▓██▒░▓█▒░██▓░██░▒██▒   ░██▒
░▓  ░▒▓███▀▒░ ▒▓ ░▒▓░ ▒▒   ▓▒█░ ▒ ░░▒░▒░▓  ░ ▒░   ░  ░
 ▒ ░▒░▒   ░   ░▒ ░ ▒░  ▒   ▒▒ ░ ▒ ░▒░ ░ ▒ ░░  ░      ░
 ▒ ░ ░    ░   ░░   ░   ░   ▒    ░  ░░ ░ ▒ ░░      ░   
 ░   ░         ░           ░  ░ ░  ░  ░ ░         ░   
          ░                                           
*/
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
using namespace std;
typedef long long int ll;
int main()
{
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll n;
    cin >> n;
    ll a1[n], a2[n - 1], a3[n - 2];
    vector<ll> v1(n);
    vector<ll> v2(n);
    vector<ll>::iterator it;
    for (ll i = 0; i < n; i++)
        cin >> a1[i];
    sort(a1, a1 + n);
    for (ll i = 0; i < n - 1; i++)
        cin >> a2[i];
    sort(a2, a2 + n - 1);
    for (ll i = 0; i < n - 2; i++)
        cin >> a3[i];
    sort(a3, a3 + n - 2);
    set_difference(a1, a1 + n, a2, a2 + n - 1, v1.begin());
    // v1.resize(it-v1.begin());
    set_difference(a2, a2 + n - 1, a3, a3 + n - 2, v2.begin());
    // v2.resize(it-v2.begin());
    // for (it = v1.begin(); it!=v1.end(); it++)
    // {
    //     cout << *it  << endl;
    // }
    // for (it = v2.begin(); it!=v2.end(); it++)
    // {
    //     cout << *it  << endl;
    // }
    cout << v1[0] << " " << v2[0] << endl;

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\nRuntime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}