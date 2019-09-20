/*************** BIT *****************/
int Bit[N+2];
void Upd(int x,int n,int vl)
{
  for( ;x<=n;x+=(x&-x))
    Bit[x]+=vl;
}
int Sum(int x)
{
  int sum=0;
  for( ;x>0;x-=(x&-x))
    sum+=Bit[x];
  return sum;
}
////////////////////////////////////////


/************* Range BIT *************/
long bit[2][N+2];
void upd(int x,long ml,long sm)
{
  for( ;x<=N;x+=(x&-x))
    bit[0][x]+=ml,bit[1][x]+=sm;
}
long get(int x)
{
  long ml=0,sm=0,bg=x;
  for( ;x>0;x-=(x&-x))
    ml+=bit[0][x],sm+=bit[1][x];
  return ml*bg+sm;
}
void range(int lo,int hi,long vl)
{
  upd(lo,vl,-vl*(lo-1));
  upd(hi,-vl,vl*hi);
}
///////////////////////////////////////

/********** 2D bit ****************/
void upd(int x,int y)
{
  for( ;x<=N;x+=x&-x)
  {
    int yy=y;
    for( ;y<=N;y+=y&-y)
      bit[x][y]++;
    y=yy;
  }
}
int get(int x,int y)
{
  int ret=0;
  for( ;x>0;x-=x&-x)
  {
    int yy=y;
    for( ;y>0;y-=y&-y)
      ret+=bit[x][y];
    y=yy;
  }
  return ret;
}
get(c,d)-get(a-1,d)-get(c,b-1)+get(a-1,b-1)
/******************************************/
