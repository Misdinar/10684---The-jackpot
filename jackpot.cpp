#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
int main(){
    while(1){
        int i,n;
        cin >> n;
        if(n==0) break;
        int arr[n];
        int jml=0, jawab=0;
        for(i=0;i<n;i++) cin >> arr[i];
        for(i=0;i<n;i++){
            jml += arr[i];
            jawab=max(jml,jawab);
            // cout << jml << " - "<< jawab << "\n";
            if(jml < 0) jml = 0;
        }
        if(jawab==0)
            cout <<"Losing streak.\n";
        else
            cout <<"The maximum winning streak is "<< jawab <<".\n";
    } return 0;
}