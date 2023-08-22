#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    //intialing a 2-D array
    int arr[n][m];
    // taking input in 2-D array
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }

    }

    // printing element of 2-D array

        cout<<"the matrix is : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // searching a array
    int x;
    cin>>x;

    bool flag = false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == x){
                cout<<i<<" "<<j<<endl;
                flag = true;
            }
        }

        if(flag){
            cout<<"element is found\n";
        }else{
            cout<<"element is not found  .\n";
        }
    }
    return 0;    
}