#include <bits/stdc++.h>
#define pb push_back
#define F first
#define S second
#define error(x)   cerr<<#x<<" "<<x<<endl;
#define all(x)      (x).begin(),(x).end()
#define Sort(x)      sort(all(x))
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef string str;
const int MAXN=1e5 + 10;
const ll MODE = (ll)1e9 + 7;
const ll INF = (ll)1e18 + 7;
vector <int> vec;
vector <int> v;
ll ans=INF;
ll n;
template<typename T>
class Node{
public:
    T value;
    Node* next;
    Node(T val){
        value = val;
        next = nullptr;
    }
};

template<typename T>
class SimpleArray {
public:
  Node<T>* first = nullptr;
  int lenght;
  int indx;
    SimpleArray(){
        lenght = 1;
        indx = 0;
    }

    void insertionSort(Node<T> **head_ref) {
        Node<T> *sorted = NULL;
        Node<T> *current = *head_ref;
        while (current != NULL) {
            class Node<T> *next = current->next;
            sortedInsert(&sorted, current);
            current = next;
        }
        *head_ref = sorted;
    }
    void sortedInsert(Node<T>** head_ref, Node<T>* new_node) {
        class Node<T>* current;
        if (*head_ref == NULL || (*head_ref)->data >= new_node->data) {
            new_node->next = *head_ref;
            *head_ref = new_node;
        }
        else{
            current = *head_ref;
            while (current->next!=NULL && current->next->data < new_node->data)
                current = current->next;
            new_node->next = current->next;
            current->next = new_node;
        }
    }

    void push (T new_elem){
        Node<T>* temp = first;
        while (first->next != nullptr){
            first = first->next;
        }
        first->next = new_elem;
        first = temp;
        delete temp;
  }
  void Delete(int indx){
        Node<T>* temp = first;
        Node<T>* next_curr = first->next;
        if (indx == 0){
            first = first->next;
            delete temp;
            delete next_curr;
            return;
        }
        for (int i=0 ; i<indx-1 ; ++i){
            first = first->next;
            next_curr = next_curr.next;
        }
        temp.next = next_curr.next;
        delete next_curr;
    }
  void Insert(int index, T inpt){
      Node<T>* temp = first;
      if (index == 0){
            first = new Node<T>(inpt);
            first->next = temp;
      }
      for (int i=0 ; i<index-1 ; ++i){
            first = first->next;
        }
      Node<T>* temp_2 = first->next;
      first->next = new Node<T>(inpt);
        first->next->next = temp_2;
    }
  int Search(T data){
        int res = 0;
        Node<T>* temp = first;
        while (first->next != nullptr){
            if (first.value == data)
                return res;
            res++;
            first = first->next;
        }
        return -1;
    }
    void printList() {
        Node<T> *temp = first;
        while(temp != nullptr) {
            cout << temp->value << " ";
            temp = temp->next;
        }
    }
};
