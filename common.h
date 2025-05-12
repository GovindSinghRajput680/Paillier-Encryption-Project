#ifndef COMMON_H
#define COMMON_H

#include<bits/stdc++.h>
using namespace std;

#define ll long long int

extern const ll p ;
extern const ll q ;
extern const ll N ;
extern ll m,c;
extern ll sq_N ;
extern ll decrypted_message;

// function declarations

ll residue();
ll modulo(ll base, ll power);
ll cipher(ll m, ll r);
vector<ll> extendedgcd(ll a, ll b);

#endif
