#include<bits/stdc++.h>
using namespace std;int i,q=65536,p;struct e{int p;string s;bool operator<(e&n){return s<n.s;}}a[65536];main(){freopen("0","rb",stdin);string s;char c;while(~(c=getchar()))s+=bitset<8>(c).to_string();a[0].s=s;cout<<s.substr(++i,q);for(;i<q;i++)cout<<1;for(;--i;){a[i].s=s.substr(++p,99);a[i].s[0]=49;a[i].p=i;}a[1].s=48;sort(a,a+q);for(;i<q;)cout<<bitset<16>(a[i++].p);}
