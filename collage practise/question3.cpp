
/*statement:
        checout at an airport consists of two sequential events first tt chec which taes 
time of A mins & there are B counters for it

second is luggage chec which taes C minuts and there are D counters present for it,
 
 given N passengers and their arrival time A[i] . find the minimum time in which all the passengers will get their both events done.
 first line contains integers denoting A, B, C, D.
 
 next line contains N; number of passengers.
 next line contains space separated integers (sorted).
 functining of different counters is independent of each other and every passengers must go throgh both events in ourder i.e. frst passport then luggage chec.*/
#include<bits/stdc++.h>
using namespace std;
int solve(int n, int A[],int a,int b,int c,int d){
    priority_queue<long long> ttCounter;
    priority_queue<long long >lugCounter;
    for(int i=0;i<b;i++)ttCounter.push(0);
    for(int i=0;i<d;i++) lugCounter.push(0);
    
    long long time = 0;
    for(int i=0; i<n;i++)
        long long arrTime = A[i];

        for(int i=0;i<n;i++){
            long long arrTime = A[i];
        
    long long ttFinishTime= ttCounter.pop();
    ttFinishTime = max(ttFinishTime, arrTime)+a;
    ttCounter.push(ttFinishTime);

    long long lugFinish = max(lugFinish, ttFinishTime)+c;
    lugCounter.push(lugFinish);

        }
    }
int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    int n;
    cin>>n;
    long long A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    return 0;
}