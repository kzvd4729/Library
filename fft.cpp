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

divide and conquer: we will divide the polynomial in two segment. one containing
only even entries and other with odd entries. polynomial A=even(x^2)+x*odd(x^2).
*/


int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);


  return 0;
}
