#include "common.h"

// Function to generate a random integer in the range [1, N - 1] which belongs to Zn*
ll residue() {
    // Create a random number generator (Mersenne Twister), seeded with hardware randomness
    static mt19937 gen(random_device{}()); // Initialized only once, even if function is called many times

    // Define a uniform distribution in the range [1, N - 1]
    uniform_int_distribution<> dis(1, N - 1);

    // Generate and return a random number in the range using the generator and distribution
    ll temp = dis(gen);
    if(temp%p == 0 || temp%q==0) return residue();
    return temp;
}

ll modulo(ll base, ll power){
    // basecase
    if(power == 0) return 1;

    ll ans = modulo(base, power/2);
    ans = (ans*ans) % sq_N;
   
    if(power%2) ans = (ans*base) % sq_N;
    return ans;

}

ll cipher(ll m,ll r){
    ll left = modulo((1+N), m);
    ll right = modulo(r, N);
    return ( left * right)  % sq_N;
}

void encryptMessage(){
    //ll r = residue();
    ll r = 83;
    c = cipher(m, r);

}