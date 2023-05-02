#include<bits/stdc++.h>
#define ll long long int
#define nd cout<<endl;
#define tc ll t;cin>>t;while(t--)
#define pb push_back
#define bits(x) __builtin_popcount(x)
#define all(x) (x).begin(),(x).end()
#define pii pair<int,int>
#define vi vector<int>
#define rep(i,a,b) for(long long int i=a;i<b;i++)
#define re(i,a,b) for(long long int i=a;i>=b;i--)
#define printVec(v) for(auto val:v)cout<<val<<" ";cout<<endl
#define auto(val,v) for(auto val:v)
using namespace std;
char tan(){

    string a,b;cin>>a>>b;
    ll ax,bx;
    ll k=0;
    if(a==b){
        return '=';
    }

    if(a.size()==1 && b.size()==1){
        
        if(a>b){
            return '<';
        }
        return '>';
    }
    if(a.size()>b.size()){
        if(a[a.size()-1]<b[b.size()-1]){
            return '>';
        }
        if(a[a.size()-1]>b[b.size()-1]){
            return '<';
        }
        if(a[a.size()-1]==b[b.size()-1]){
            if(a[a.size()-1]=='S'){
                return '<';
            }
            else{
                return '>';
            }
        }
    }
    if(a.size()<b.size()){
        if(a[a.size()-1]<b[b.size()-1]){
            return '>';
        }
        if(a[a.size()-1]>b[b.size()-1]){
            return '<';
        }
        if(a[a.size()-1]==b[b.size()-1]){
            if(a[a.size()-1]=='S'){
                return '>';
            }
            else{
                return '<';
            }
        }
    }

    if(a[a.size()-1]=='S'){
        return '<';
    }
    
        return '>';
    




}
int main(){
ios::sync_with_stdio(false); cin.tie(0);
tc{
    //tan();
    //cout<<endl;
    cout<<tan()<<endl;
}
    return 0;
}