#include<bits/stdc++.h>
using namespace std;
                 //Welcome To Hridoy's Code
#define   ll                  long long
#define   ull                 unsigned long long
#define   pb                  push_back
#define   em                  emplace_back
#define   ff                  first
#define   ss                  second
#define   endl                "\n"
#define   MX                  10000009
#define   all(v)              (v.begin(), v.end())
#define   rall(v)             (v.rbegin(), v.rend())
#define   pi                  acos(-1.0)
#define   LCM(LCM_X,LCM_Y)    (LCM_X/__gcd(LCM_X,LCM_Y))*LCM_Y
#define   FastRead   ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
char prime[MX];
ll arr[MX],k=0;
void sieve()
{
    ll i,j;
    prime[0]=prime[1]=1;
    for(i=4;i<=MX;i+=2)prime[i]=1;
    for(i=3;i<=sqrt(MX);i+=2)
    {
        if(prime[i]==0)
        {
            for(j=i*i;j<=MX;j+=2*i)
            {
                prime[j]=1;
            }
        }
    }
    for(i=2;i<=MX;i++)
    {
        if(prime[i]==0)
        {
            arr[k++]=i;
        }
    }

}
int main()
{
    sieve();
	int n;
	while(cin>>n)
    {
        cout<<arr[n]<<endl;
    }
	return 0;
}
