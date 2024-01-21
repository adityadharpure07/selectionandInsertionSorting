#include<iostream>
using namespace std;
int main(){
   int n;
    cout<<"enter number of element:";
    cin>>n;
    int arr[n];
    cout<<"enter elements of arr:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //insertion sort
    for(int i=0;i<n;i++){
        int j=i;
        while(j>=1){
            if(arr[j]>arr[j-1]) break;
            if(arr[j]<arr[j-1]) swap(arr[j],arr[j-1]);
            j--;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
    }
     cout<<endl;
    int x=0;
    for(int i=0;i<n;i++){
        x+=arr[i];
        x*=10;
    }
    x=x/10;
    cout<<"smallest number: "<<x;
    cout<<endl;
    for(int j=n-1;j>0;j--){
        if(arr[j]!=arr[j-1]){
            swap(arr[j],arr[j-1]);
            
        break;
        }
    }
    int y=0;
    for(int i=0;i<n;i++){
        y+=arr[i];
        y*=10;
    }
    y=y/10;
    cout<<"second smallest number: "<<y<<endl;
    cout<<"the minimum sum is "<<x+y;
}