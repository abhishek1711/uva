#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;cin>>t;
  while(t--)
  {
    int d,i,j;cin>>d;
    string nam[d];
    int rang[d][2];
    for(i=0;i<d;i++)
    {
      cin>>nam[i]>>rang[i][0]>>rang[i][1];
    }
    int q;cin>>q;

    for(i=0;i<q;i++)
    {
      int cont=0,ind;
      int p;cin>>p;
      for(j=0;j<d;j++)
      {
        if(p>=rang[j][0] && p<=rang[j][1])
        {
          ind=j;cont++;
        }
      }
      if(cont==0 || cont>1)
      {
        cout<<"UNDETERMINED"<<endl;
      }
      else
      {
        cout<<nam[ind]<<endl;
      }

    }
    if(t!=0) cout<< endl ;
  }
}
