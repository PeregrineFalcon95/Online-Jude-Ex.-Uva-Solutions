#include<bits/stdc++.h>using namespace std;int main(){    int n;    while(scanf("%d",&n)==1)    {        int f=0;        while(n--)        {            if(f>0)printf("\n");            f++;            int k,l;            scanf("%d%d",&k,&l);            int c=0;            for(int p=1; p<=l; p++)            {                if(c>0)printf("\n");                c++;                int a=0,b=0;                for(int i=1; i<=k*2; i++)                {                    if(i<=k)                    {                        for(int j=1; j<=i; j++)printf("%d",i);                        printf("\n");                        a++;                    }                    else                    {                        if(b==0)a--;                        for(int j=1; j<=a; j++)printf("%d",a);                        if(a!=0)printf("\n");                        a--;                        b=1;                    }                }            }        }    }    return 0;}