#include <iostream>

using namespace std;

int main()
{
    int i,j,n,m,p,sum=0;
    cin>>n>>m;
    for(i=0;i<n;i++){
      cin>>p;
      if(p>m)
        sum+=2;
      else
        sum+=1;
    }
    cout<<sum;

    return 0;
}
