#include<iostream>
using namespace std;

struct node{
    void *data;
    node *next;
};
struct node *head=NULL;

node* new_node(void* data, size_t data_size){
    node *temp = new node;
    temp->data = operator new(data_size);
    for(int i=0;i<4;i++){
        *((char*)temp->data + i) = *((char*)data + i);
    }
    temp->next = NULL;
    return temp;
}

void printList(node **head){
    node *temp = *head;
    if(temp == NULL) cout<<"List is empty"<<endl;
    while(temp!=NULL){
        cout<<*(float*)(temp->data)<<endl;
        temp = temp->next;
    }
}

int main()
{
    float data[6] = {1.777,9.88,8.77,5.66,3.999,45.98};
    head = new_node(&data[0],sizeof(float));
    head->next = new_node(&data[1],sizeof(float)); 
    head->next->next = new_node(&data[2],sizeof(float));
    head->next->next->next = new_node(&data[3],sizeof(float));
    head->next->next->next->next = new_node(&data[4],sizeof(float));
    head->next->next->next->next->next = new_node(&data[5],sizeof(float));
    printList(&head);
    return 0;
}
