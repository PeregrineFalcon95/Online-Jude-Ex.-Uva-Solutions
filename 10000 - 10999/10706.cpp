///*** One Last Try ***///
#include<bits/stdc++.h>
using namespace std;
#pragma comment(linker, "/stack:200000000")
#define ll long long int
#define inf ( int )( 1e9 + 1e9 )
#define mxs (int)( 1e6 + 10 )
#define md  int mid = ( l + r )>>1;
#define mod 10000000000007//(ll)(1e9)+7
//int dx[]={+1,0,+0,-1};///Four Directions
//int dy[]={+0,-1,+1,+0};///Four directions
//int dx [] = {+1,-1,+0,+0,-1,-1,+1,+1};///Eight Directions
//int dy [] = {+0,+0,+1,-1,+1,-1,-1,+1};///Eight Directions
ll source, t, n, m, j,a, b, c, d, e,f, i,ans,cases, pos, num, root;
string s, s2, s3, s4;
ll ar [ mxs ];
void brainfuck();
void cal();
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    brainfuck();
    return 0;
}
void brainfuck()
{
    ///Equation for i'th stage = i * 9 * 10^(i-1)
    ar [ 1 ] = 9;
    ar [ 2 ] = ar [ 1 ] + 180;
    ar [ 3 ] = ar [ 2 ] + 2700;
    ar [ 4 ] = ar [ 3 ] + 36000;
    ar [ 5 ] = ar [ 4 ] + 450000;
    ar [ 6 ] = ar [ 5 ] + 5400000;
    ar [ 7 ] = ar [ 6 ] + 63000000;
    cin>>t;
    while( t-- )
    {
        cin>>n;
        cal();
    }
}
void cal()
{
    vector < ll > v;
    ll cur = 1;
    while( 1 )
    {
        if ( cur <= 9 )
        {
            a = 1;
            b = ( cur - a + 1 ) * 1;
            if ( n - b > 0 )
            {
                cur++;
                n -= b;
                continue;
            }
            while( a <= cur )
            {
                if ( n - 1 <= 0 )
                {

                    ///It's the desired number
                    while ( a > 0 )
                    {
                        v.push_back( a % 10 );
                        a /= 10;
                    }
                    reverse( v.begin() , v.end() );
                    cout<<v [ n - 1 ]<<"\n";
                    return;
                }
                n -= 1;
                a++;
            }
        }
        else if ( cur <= 99 )
        {
            if ( n - ar [ 1 ] <= 0 )
            {
                cur = 9;
                continue;
            }
            n -= ar [ 1 ];
            a = 10;

            b = ( cur - a + 1 ) * 2;
            if ( n - b > 0 )
            {
                cur++;
                n -= b;
                continue;
            }
            while( a <= cur )
            {
                if ( n - 2 <= 0 )
                {
                    ///It's the desired number
                    while ( a > 0 )
                    {
                        v.push_back( a % 10 );
                        a /= 10;
                    }
                    reverse( v.begin() , v.end() );
                    cout<<v [ n - 1 ]<<"\n";
                    return;
                }
                n -= 2;
                a++;
            }
        }
        else if ( cur <= 999 )
        {
            if ( n - ar [ 2 ] <= 0 )
            {
                cur = 99;
                continue;
            }
            n -= ar [ 2 ];
            a = 100;
            b = ( cur - a + 1 ) * 3;
            if ( n - b > 0 )
            {
                cur++;
                n -= b;
                continue;
            }
            while( a <= cur )
            {
                if ( n - 3 <= 0 )
                {

                    ///It's the desired number
                    while ( a > 0 )
                    {
                        v.push_back( a % 10 );
                        a /= 10;
                    }
                    reverse( v.begin() , v.end() );
                    cout<<v [ n - 1 ]<<"\n";
                    return;
                }
                n -= 3;
                a++;
            }
        }
        else if ( cur <= 9999 )
        {
            if ( n - ar [ 3 ] <= 0  )
            {
                cur = 999;
                continue;
            }
            n -= ar [ 3 ];
            a = 1000;
            b = ( cur - a + 1 )* 4;
            if ( n - b > 0 )
            {
                cur++;
                n -= b;
                continue;
            }
            while( a <= cur )
            {
                if ( n - 4 <= 0 )
                {

                    ///It's the desired number
                    while ( a > 0 )
                    {
                        v.push_back( a % 10 );
                        a /= 10;
                    }
                    reverse( v.begin() , v.end() );
                    cout<<v [ n - 1 ]<<"\n";
                    return;
                }
                n -= 4;
                a++;
            }
        }
        else if ( cur <= 99999 )
        {

            if ( n - ar [ 4 ] <= 0 )
            {
                cur = 9999;
                continue;
            }
            n -= ar [ 4 ];
            a = 10000;
            b = ( cur - a + 1 ) * 5;
            if ( n - b > 0 )
            {
                cur++;
                n -= b;
                continue;
            }
            while( a <= cur )
            {
                if ( n - 5 <= 0 )
                {

                    ///It's the desired number
                    while ( a > 0 )
                    {
                        v.push_back( a % 10 );
                        a /= 10;
                    }
                    reverse( v.begin() , v.end() );
                    cout<<v [ n - 1 ]<<"\n";
                    return;
                }
                n -= 5;
                a++;
            }
        }
        else if ( cur <= 999999 )
        {
            if ( n - ar [ 5 ] <= 0 )
            {
                cur = 99999;
                continue;
            }
            n -= ar [ 5 ];
            a = 100000;
            b = ( cur - a + 1 ) * 6;
            if ( n - b > 0 )
            {
                cur++;
                n -= b;
                continue;
            }
            while( a <= cur )
            {
                if ( n - 6 <= 0 )
                {

                    ///It's the desired number
                    while ( a > 0 )
                    {
                        v.push_back( a % 10 );
                        a /= 10;
                    }
                    reverse( v.begin() , v.end() );
                    cout<<v [ n - 1 ]<<"\n";
                    return;
                }
                n -= 6;
                a++;
            }
        }
        else if ( cur <= 9999999 )
        {
            if ( n - ar [ 6 ] <= 0 )
            {
                cur = 999999;
                continue;
            }
            n -= ar [ 6 ];
            a = 1000000;
            b = ( cur - a + 1 ) * 7;
            if ( n - b > 0 )
            {
                cur++;
                n -= b;
                continue;
            }
            while( a <= cur )
            {
                if ( n - 7 <= 0 )
                {

                    ///It's the desired number
                    while ( a > 0 )
                    {
                        v.push_back( a % 10 );
                        a /= 10;
                    }
                    reverse( v.begin() , v.end() );
                    cout<<v [ n - 1 ]<<"\n";
                    return;
                }
                n -= 7;
                a++;
            }
        }
        cur++;
    }
}
