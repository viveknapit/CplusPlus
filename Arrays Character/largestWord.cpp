//largest word in a sentence
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr, n); // to take input of spaces
    cin.ignore();

    int maxLen = 0;
    int currLen = 0;
   /* for(int i=0;i<n;i++){
        if(arr[i]==' ' || arr[i] == '\0'){
            if(currLen>maxLen){
                maxLen=currLen;
            }
            currLen =0;

        }
        currLen++;
    } */

    // by while loop

    int i=0;  int st =0; int maxSt = 0;
    while(1){
        if(arr[i]==' ' || arr[i]=='\0'){
            if(currLen>maxLen){
                maxLen  = currLen;
                maxSt = st;
            }
            
            currLen = 0;
            st = i+1;
        }
        else
        currLen++;

        if(arr[i]=='\0')
            break;
        
        i++;
    }

    cout<<maxLen<<endl;\
    for(int i=0;i<maxLen;i++){
        cout<<arr[i+maxSt];
    }
    return 0;
}