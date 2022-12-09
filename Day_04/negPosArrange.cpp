//https://www.geeksforgeeks.org/rearrange-positive-and-negative-numbers-publish/
//partition data neg and pos pivot = 0
// place them in right positions

#include<iostream>
using namespace std;
class Arrangement{
    public:
        void PartitionData(int *,int);
        void posNegArrange(int *, int);
        void printData(int *,int);
};

void Arrangement::printData(int *a,int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" "<<endl;
    }
}

void Arrangement::PartitionData(int *a,int size){
    int i =-1;
    for(int j=0;j<size;j++){
        if(a[j]<0){
            i++;
            swap(a[i],a[j]);
        }
    }

    int p_id = i+1;
    int n_id = 0;
   // -1 -3 -7 4 5 6 2 8 9
    while(p_id < size && n_id < p_id && a[n_id] <0 ){
        swap(a[p_id],a[n_id]);
        n_id+=2;
        p_id++;
    }
} 


void Arrangement::posNegArrange(int *a, int size){
   PartitionData(a,size); 
}

int main()
{
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    Arrangement ar;
    int size = sizeof(arr)/ sizeof(arr[0]);
    ar.posNegArrange(arr,size);
    ar.printData(arr,size);
    return 0;
}