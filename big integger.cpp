#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll bajjo;
   string bajok;
   cin>>bajok>>bajjo;
   ll len=bajok.size(),mod=0,i,j;

   cout<<"Bagfol: ";
   ll print=0;
   for(ll i=0;i<len;i++)
   {
       mod=(mod*10+bajok[i]-'0');
       if(mod<bajjo && !print)
       {
           continue;
       }
       cout<<mod/bajjo;
       print=1;
       mod=mod%bajjo;
   }
   cout<<endl;
   cout<<"Bagshes: "<<mod<<endl;

   return 0;

}
