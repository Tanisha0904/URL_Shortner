#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n][2];
        for(int i=0;i<n;i++){
            cin>>arr[i][0]>>arr[i][1];
        }
        int maxx = 0, maxy = 0;
        int max_x = 0, max_y = 0;
        for(int i=0;i<n;i++){
            if(arr[i][0]>maxx && arr[i][0]>0){
                maxx = arr[i][0];
            }
            else if(abs(arr[i][0])>abs(max_x) && arr[i][0]<0){
                max_x = abs(arr[i][0]);
            }
            if(arr[i][1]>maxy && arr[i][1]>0){
                maxy = arr[i][1];
            }
            else if(abs(arr[i][1])>abs(max_y) && arr[i][1]<0){
                max_y = abs(arr[i][1]);
            }

        }
        cout<<(maxx+maxy+max_x+max_y)*2<<"\n";

    }
    return 0;
}