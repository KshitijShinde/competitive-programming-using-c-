#include <iostream>
using namespace std;

bool ispair(int arr[],int n,int x){
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==x)
            return true;
        else if(arr[i]+arr[j]<x)
            i++;
        else
            j--;
    }
    return false;
}

int main()
{
    int arr[]={1,2,3,4,5,6,8};
    int n=7;
    int x=10;
    
    if(ispair(arr,n,x)){
        cout<<"pair with sum "<<x<<" exist in array.";
    }
    else{
        cout<<"no pair with sum";
    }
    
    return 0;
}