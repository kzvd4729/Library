#include<bits/stdc++.h>
#define long long long
using namespace std;
const int N=1e6;
/*
so, the main thing about converting polynomial into a sample form is to evalute
at n distinct point(highest degree of the polynomial is n-1). 
a number g is called primitive root of prime p if g^i (1 to p-1) generates
all number from 1 to p-1(in any order).

now imagine we have to calculate ntt modulo prime p. g is the generator of p.
if p=17, g=3; in the base case of the recursion when n=1,we can use 3^0.
when n=2 we can use sample 3^0 and 3^8 as (3^0)^2=(3^8)^2=3^0. whwn n=4 we can
use 3^0, 3^8, 3^4, 3^12. when n=8 3^0, 3^8, 3^4, 3^12, 3^2, 3^10, 3^16, 3^14.
and so on. as 3 is the generator every power guarantee distinct number.
the highest sample we can take is the highest(2^k) which divides p-1. 
so to ensure 2^k sample p have t be in the form c*2^k+1.(we can just multiply c
with each sample). of course we can use less power of 2 than k for sample.
*/

int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);
  

  return 0;
}
