#include <bits/stdc++.h>
using namespace std;
#define n 1000005
bool a[n];
long long int k=1;
long long int twin[n];
void sieve()
{
    long long int i,j;
    a[0]=a[1]=1;
    for(i=4;i<=n;i=i+2)
    {
        a[i]=1;
    }
    for(i=3;i<=sqrt(n);i=i+2)
    {
        for(j=i*i;j<=n;j=j+2*i)
        {
            a[j]=1;        //3*3, 3*5,3*7.....
        }
    }
    for(i=2;i<=n;i++)
    {
        if(a[i]==0)
        {
           twin[k]=i;
           k++;
        }
    }



}

int main()
{
     long long int r,b,x,l,g,m,t=0,p,q;
     long double c;
     sieve();
     while(cin>>m)
     {
        t++;
        b=0;
        q=m;
        if(m==0)
        {
            break;
        }
        r=1;
        for(g=1;g<=k && twin[g]<=sqrt(m);g++)
        {
          c=0;
          p=twin[g];
          if(m%twin[g]==0)
          {

            while(m%twin[g]==0)
            {
                c++;
                m=m/twin[g];
                if(m==0 || m==1)
                {
                    break;
                }

             }

              r=r*(pow((double)p,c+1.0)-1)/(p-1);

           }



        }
        if(m!=1)
        {
            r=r*(pow((double)m,2)-1)/(m-1);
        }
        cout<<"Sum Of Divisors="<<r<<endl;

       }


        return 0;

}
