//https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/
// Array is a collection of contiguous memory location. 
// The idea is to store multiple items of same type. 
// Address calculation by adding the value to bas address. 


//Reverse the content of array + template c++
#include<iostream>
#include<algorithm>
using namespace std;
template <typename T1, typename T2, typename T3> 
void reverseArray(T1 *a, T2 start, T3 end ){
    while(start < end){
        swap(a[start], a[end]);
        start++;
        end--;
    }
}

template <typename T1, typename T2, typename T3> 
void RecursiveReverseArray(T1 *a, T2 start, T3 end ){
    if(start < end){
        swap(a[start], a[end]);
        RecursiveReverseArray(a,start+1, end-1);
    }
    return;
}
template <typename T1, typename T2> 
void printArray(T1 *a,T2 size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    // Template argument deduction 
    int a[2]= {1,2};
    reverseArray(a,0,1);
    printArray(a,2);
    RecursiveReverseArray(a,0,1);
    printArray(a,2);

    float fa[4]={1.1, 2.2, 3.3, 4.4};
    reverseArray(fa,0,3);
    printArray(fa,4);
    RecursiveReverseArray(fa,0,3);
    printArray(fa,4); 
    return 0;
}