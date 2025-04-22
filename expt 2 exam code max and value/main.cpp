
#include <iostream>
using namespace std;

int checkbit(int pattern,int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if((pattern&arr[i])==pattern){
        count++;
        }
    }
    return count;
}

int maxand(int arr[],int n){
    int res=0;
    int count;
    for(int bit=31;bit>=0;bit--){
        count=checkbit(res|(1<<bit),arr,n);
        if(count>=2){
            res=res|(1<<bit);
        }
    }
    return res;
}

int main()
{
    int arr[]={4,8,12,16};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxand(arr,n);
    
    return 0;
}