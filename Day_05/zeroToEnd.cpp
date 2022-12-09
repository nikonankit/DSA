//https://www.geeksforgeeks.org/move-zeroes-end-array/
#include<iostream>
#include<vector>
using namespace std;

void moveZero(int *a,int size){
    int count = 0;
    for(int i=0;i<size;i++){
        if(a[i]!=0){
            a[count++]=a[i];
        }
    }
    while(count<size){
        a[count]=0;
        count++;
    }
}
void moveZeroPartition(int *a,int size){
    int j=0;
    for(int i=1;i<size;i++){
        if(a[i]>0){
            swap(a[i],a[j]);
            j++;
        }
    }
}
void moveZeroSTL(vector<int> &a,int size){
    int count;
    for(int i=0;i<size;i++){
        if(a[i]==0){
            count++;
            a.erase(a.begin()+i);
            i--;
        }
    }
    for(int i=0;i<count;i++){
        a.push_back(0);
    }
}
void printArray(int *a,int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void printVector(vector<int> &a,int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int a[10]={1,0,4,5,7,0,0,0,12,98};
    vector<int> arr(a,a+10);
    moveZero(a,10);
    printArray(a,10);
    moveZeroPartition(a,10);
    printArray(a,10);
    moveZeroSTL(arr,10);
    printVector(arr,10);
    return 0;
}