#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=3){
            cout<<n<<" ";
            for(int i=1;i<n;i++){
                cout<<i<<" ";
            }

        }
        else{
            if(n%2!=0){

            

                cout<<"3 1 2 ";
                for(int i=4;i<n;i+=2){
                    cout<<i+1<<" "<<i<<" ";
                }
            }
            else{

                for(int i=1;i+1<=n;i+=2){
                    cout<<i+1<<" "<<i<<" ";
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}