///** One Last Try ***///
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define inf ( int )( 1e9 + 10 )
#define mxs (int)( 1e6 + 10 )
#define ll long long int
//#define md  int mid = ( l + r )>>1;
//int dx[]={+1,-1,+0,+0};///Four Directions
//int dy[]={+0,+0,+1,-1};///Four directions
//int dx [] = {+1,-1,+0,+0,-1,-1,+1,+1};///Eight Directions
//int dy [] = {+0,+0,+1,-1,+1,-1,-1,+1};///Eight Directions
int ans, t, n, m, i, j , k, a, b, c, d, e,f, sz, q,mx,le,re,cases,pos;
string s, s2, s3, s4, s5, s6;
int ar  [ 2 ] [ mxs ] ;
vector < double >::iterator it;
double dis( double x1 , double y1 , double x2 , double y2 )
{
    return (sqrt( ( x2 - x1 ) * ( x2 - x1 ) + ( y2 - y1 ) * ( y2 - y1 ) ));
}
int marker [ mxs ];
vector < double > xx;
void brainfuck();
double query( int ra );
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //ios_base::sync_with_stdio(NULL);
    //cin.tie(NULL);
    //cout.tie(NULL);
    brainfuck();
    return 0;
}
void brainfuck()
{
    double x1 , y1 , x2 , y2;
    while( scanf("%d%d",&n,&m) == 2 && n && m )
    {
        memset( marker , 0 , sizeof marker );
        for ( i = 1 ; i <= n; i++ )
        {
            scanf("%d%d",&ar [ 0 ] [ i ],&ar [ 1 ] [ i ] );
        }
        double lol;
        for ( i = 1 ; i <= n; i++ )
        {
            for ( j = i + 1 ; j <= n; j++ )
            {
                lol = dis( ar [ 0 ] [ i ] , ar [ 1 ] [ i ] , ar [ 0 ] [ j ] , ar [ 1 ] [ j ] );
                marker [ (int)ceil(lol) ]+= 2;
            }
            marker [ 0 ]++;
        }
        for ( i = 1 ; i <= 1000000; i++ )
            marker [ i ] += marker [ i - 1 ];
        while( m-- )
        {
            scanf("%d",&a);
            printf("%.2f\n",query( a ) );
        }
        putchar(10);
    }
}
double query( int ra )
{
    return ( ( double ) marker [ ra ] / (double)n );
}
