#include "common.h"

ll decrypted_message = -1; // dummy message
// Function to calculate multiplicative inverse
vector<ll> extendedgcd(ll a, ll b){
    if( b==0) return {1,0,a};
    vector<ll> res = extendedgcd(b,a%b);
    // (u, v, d) = (v', u' - (a/b)*v', d);
    return {res[1], res[0]-((a/b)*res[1]), res[2]}; 
}

void decryptMessage(){
    ll phi = (p-1)*(q-1);
    ll  c_cap = modulo(c,phi);
    ll m_cap = (c_cap-1)/N;
    ll inv_phi = extendedgcd(phi,N)[0];
    inv_phi = ((inv_phi%N)+N)%N;
    decrypted_message = (m_cap*inv_phi)%N;

}