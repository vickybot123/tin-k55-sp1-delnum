#include<iostream>
#include<algorithm>
using namespace std;
const int maxday=1e5;
int a[maxday],b[maxday],m,n,ssa=1,ssb=1,sum=0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>m>>n;
    for(int i=1; i<=m; i++) cin>>a[i];
    for(int i=1; i<=n; i++) cin>>b[i];
    sort(a+1,a+m+1);
    sort(b+1,b+n+1);
    for(; ssa+ssb<=m+n;)
    {
        if(a[ssa]==b[ssb])
        {
            sum++;
            ssa++;
            ssb++;
        }
        else if(a[ssa]<b[ssb]) ssa++;
        else ssb++;
    }
    cout<<sum;
}
