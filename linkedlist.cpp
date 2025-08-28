#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
 
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }

Node(int data1){
    data=data1;
     next=nullptr;
}
};
Node* convertarrtolinked(vector<int>&arr){
 Node* head=new Node(arr[0]);
 Node* mover=head;
 for(int i=1; i<arr.size(); i++){
  Node* temp=new Node(arr[i]);
  mover->next=temp;
  mover=temp;
 }
 return head;
}
Node* deletenode(Node* head){
    if(head==nullptr)return head;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
Node* deletetail(Node* head){
    if(head==nullptr||head->next==nullptr) return nullptr;
    Node*temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}
Node* deletekpos(Node* head, int k){
    if(head==nullptr)return head;
    if(k==1){
         Node* temp=head;
         head=head->next;
         delete temp;
         return head;
    }
    int cnt=0;
    Node* temp=head;
    Node* prev=nullptr;
    while(temp!=nullptr){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;

    }
    return head;
   
}
    void Print(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node* inshad(Node*head,int val){
    Node*temp=new Node(val,head);
    return temp;

}
Node* intail(Node* head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) return newNode;

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}
Node* insepos(Node* head,int ele,int k){
     Node* newNode = new Node(ele);
    if(head==nullptr) {
        if(k==1) return new Node(ele);
        else return nullptr;
    }
    if(k==1){
        Node*temp=new Node(ele,head);
        return temp;
    }
    int cnt=0;
    Node*temp=head;
    while(temp!=nullptr){
        cnt++;
        if(cnt==k-1){
            Node*nw=new Node(ele,head);
            nw->next=temp->next;
            temp->next=nw;
            return head; 


        }
        temp=temp->next;
    }
}

int main(){
    vector<int>arr={2,4,5,6,7};
    Node* head=convertarrtolinked(arr);
    head=insepos(head,50,3);
    Print(head);
    return 0;
}
