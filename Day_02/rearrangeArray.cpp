//https://www.geeksforgeeks.org/rearrange-array-arri/
#include<iostream>
using namespace std;

template <typename T1, typename T2>
void rearrangeArray(T1 *a, T2 size){
    int i = 0;
    while(i<size){
        int pos = a[i];
        if(a[i]!=-1 && a[pos] != a[i] ) swap(a[pos],a[i]);
        else i++;
    }
}

template <typename T1, typename T2>
void printArray(T1 *a, T2 size){
    for (int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int size = 20;
    int arr[20]= {19, 7, 0, 3, 18, 15, 12, 6, 1, 8, 11, 10, 9, 5, 13, 16, 2, 14, 17, 4};
    rearrangeArray(arr,size);
    printArray(arr,size);
    return 0;
}