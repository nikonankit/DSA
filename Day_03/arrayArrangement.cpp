//https://www.geeksforgeeks.org/rearrange-array-arri-arrj-even-arri/
#include<iostream>
using namespace std;

void shuffleArray(int *a, int *b, int size){
    
    sort(a, a+size);
    int p = 0;
    int q,l,r;
    if(size%2 == 0){
        q = size-1;
        r = size-1;
        l = size-2;
    }
    else{
        q = size-2;
        r = size -2;
        l = size-3;
        b[size-1]= a[size-1];
    }
   
    while(p<q){
        b[l]= a[p];
        b[r]=a[q];
        p++;
        q--;
        l= l-2;
        r= r-2;
    }

}


int main()
{

    int arr[8] = {1, 2, 1, 4, 5, 6, 8, 8};
    int dup_arr[8];
    shuffleArray(arr, dup_arr, 8);
    for(int i=0;i<8;i++){
        cout<<dup_arr[i]<<" ";
    }
    return 0;
}