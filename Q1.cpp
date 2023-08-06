#include <iostream>
using namespace std;

int main()
{
    int *arr;
    int n;
    cout<<"no. of elements: ";
    cin>>n;
    arr=new int[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int x=0;
    for(int i=0;i<n;i++){
        if(arr[i]/2==0){
            cout<<arr[i]<<" ";
            x++;
        }
        else{
            continue;
        }
    }

    return 0;
}
