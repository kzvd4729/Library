/*
we will only define here primitive root for prime number(modulo prime).
a number g is called primitive root of prime p if g^i (1 to p-1) generates
all number from 1 to p-1(in any order).
primitive root is also called generator.
*/
//a naive approach
int primitiveRoot(int p)
{
  vector<int>v(p);v[0]=1;
  for(int i=2;i<p;i++)
  {
    for(int j=1;j<p;j++)v[j]=0;
    int pw=1,f=0;
    for(int j=1;j<p;j++)
    {
      pw=(1LL*pw*i)%p;
      if(v[pw]){f=1;break;}
      v[pw]=1;
    }
    if(!f)return i;
  }
  return -1;
}


int powmod (int a, int b, int p) {
    int res = 1;
    while (b)
        if (b & 1)
            res = int (res * 1ll * a % p),  --b;
        else
            a = int (a * 1ll * a % p),  b >>= 1;
    return res;
}

int generator (int p) {
    vector<int> fact;
    int phi = p-1,  n = phi;
    for (int i=2; i*i<=n; ++i)
        if (n % i == 0) {
            fact.push_back (i);
            while (n % i == 0)
                n /= i;
        }
    if (n > 1)
        fact.push_back (n);

    for (int res=2; res<=p; ++res) {
        bool ok = true;
        for (size_t i=0; i<fact.size() && ok; ++i)
            ok &= powmod (res, phi / fact[i], p) != 1;
        if (ok)  return res;
    }
    return -1;
}
