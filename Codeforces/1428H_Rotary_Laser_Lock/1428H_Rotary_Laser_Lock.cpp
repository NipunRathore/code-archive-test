/**
 * Problem: Rotary Laser Lock
 * Platform: Codeforces
 * Problem URL: https://codeforces.com/problemset/problem/1428/H
 * Tags: binary search, interactive, *3500
 * Language: cpp
 * Date: 2026-03-01T07:12:42.774Z
 * Performance:
 * Runtime: 140ms
 * Memory: 0KB
 */

#include<iostream>
#include<vector>
using std::cin;
using std::cout;
int n,m,w,nw,ans[1010],flg;
int ask(int r,int d){
cout<<"? "<<r<<' '<<d<<'\n';
int x,y=nw;
cin>>x,nw=x;
return nw-y;
}
int main(){
std::ios::sync_with_stdio(false);
cin>>n>>m,w=n*m;
ask(0,1);
std::vector<int> S;
for(int i=1;i<n;i++) S.push_back(i);
while(1)
if(ask(0,1)>0){
flg=1;
continue;
}else if(flg) break;
ask(0,-1);
for(int i=0;i<w;i++)
if(ask(0,1)>0)flg=1;
else if(flg&&S.size()){
ask(0,-1);
int l=0,r=S.size()-1;
int out=0;
while(l<r){
int mid=(l+r)>>1;
if(!out) for(int j=mid+1;j<=r;j++) ask(S[j],-1);
else for(int j=l;j<=mid;j++) ask(S[j],1);
if(ask(0,-1)<0) r=mid,out=0;else l=mid+1,out=1;
ask(0,1);
}
int p=S[l];
for(int j=out-1;j<m;j++) ask(p,-1);
ans[p]=(i-m-1+w)%w,S.erase(S.begin()+l);
i--,ask(0,-1),flg=ask(0,1)>0;
}
cout<<"! ";
for(int i=1;i<n;i++) cout<<ans[i]<<' ';
cout<<std::endl;
return 0;
}