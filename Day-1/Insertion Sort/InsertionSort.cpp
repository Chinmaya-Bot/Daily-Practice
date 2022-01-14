#include<iostream>
using namespace std;

int main(){
    int n,key,i,j;
    cout<<"Enter the number of elements:";
    cin>>n;
    int *arr = new int(n); //Dynamic Allocation of a array
    cout<<"Enter the elements:\n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    //Insertion Sort 
    for(j=1;j<n;j++){
        key=arr[j];
        i=j-1;
        while((i>=0) && arr[i]>key){
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=key;
    }
    //Printing the output array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    
}
