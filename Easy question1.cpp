#include<iostream>
using namespace std;
void reverseArray (int arr[],int start,int end)
{
while(start<end){
    int temp = arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
}
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof (arr)/sizeof(arr[0]);
    print arr(arr,n);
    reverse arr(arr,0,n-1);
    cout<<"Reversed array is "<<endl;
    cout<<arr(arr,n);
    return 0;
}

