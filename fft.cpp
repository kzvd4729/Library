#include<bits/stdc++.h>
#define long long long
using namespace std;
const int N=1e5;

/*
if we have a polynomial of degree n-1(maximum power), with n distinct sample
the polynomial can be uniquely determined. in other way from n sample we can
retrieve the polynomial of degree n-1.
two polynomial multiplication takes n^2 time. but in sample form, multiplication
takes linear time. we convert the polynomials in the sample form in nlgn,
multiply them in n time and go back to polynomial form in nlgn time.
once we convert a polynomial in sample form we can do some operation on it,
like multiplication of several sample, power by anything, multiply by any number.
and the end of the day, go back to polynomial land.

1 x0 x0^2 x0^3 x0^4 ...   a0      b0
1 x1 x1^2 x1^3 x1^4 ... x a1  =   b1
1 x2 x2^2 x2^3 x2^4 ...   a2      b2
....
the matrix is called vandermonde matrix. bi is the value at point ai.
to get ai back from bi we need to calculate the inverse of vandermonde matrix.
luckily the inverse is

      1 x0^-1 x0^-2 x0^-3 x0^-4 ...   b0      a0
1/n * 1 x1^-1 x1^-2 x1^-3 x1^-4 ... x b1  =   a1
      1 x2^-1 x2^-2 x2^-3 x2^-4 ...   b2      a2
....
now we know how to convert between polynomial to sample and vice verse.
but complexity is still n^2.
divide and conquer: we will divide the polynomial in two segment. one containing
only even entries and other with odd entries. polynomial A=even(x^2)+x*odd(x^2).
so the idea is divide polynomial is half, evaluate at n points at each recursion
level, still (n^2)lgn. but we have the freedom to choose n points as we wish.

every number other than 0 has two square root. imagine in the base case when
polynomial size is 1, we evaluate at point 1. now at the previous step when the
size is 2, we can use -1 and 1 to evaluate because we already computed the
value of even(x^2) and odd(x^2). when the size is 4 we can use i,-i,1,-1.
every point evaluation is completed in O(1) and thus the complexity will be nlgn.

but i,-i and all their square root are complex number. how do we represent them.


*/


int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);


  return 0;
}
