#include <iostream>
#include <ostream>
using namespace std;

template <class T>
class Node
{
private:
   T key;
   Node<T> *next;

public:
   Node<T>() : next{nullptr} {}
   Node<T>(T key) : key{key}, next{nullptr} {}
   ~Node<T>() { next = nullptr; }

   T getKey() const { return key; }
   Node<T> *getNext() { return next; }
   void setKey(T key) { this->key = key; }
   void setNext(Node<T> *next) { this->next = next; }

   friend ostream &operator<<(ostream &os, const Node<T> &node)
   {
      os << node.getKey();
      return os;
   }
};

template <class T>
class LinkedList
{
private:
   Node<T> *head;
   Node<T> *tail;
   size_t size;

protected:
   void setHead(Node<T> *node)
   {
      if (isEmpty())
      {
         head = node;
         tail = node;
      }
      else
      {
         node->setNext(head);
         head = node;
      }
   }

public:
   LinkedList<T>() : head{nullptr}, tail{nullptr}, size{0} {};
   LinkedList<T>(Node<T> *node) : head{node}, tail{node}, size{1} {};
   LinkedList<T>(T key) : head{new Node<T>(key)}, tail{head}, size{1} {};

   Node<T> *getHead() const { return head; }
   Node<T> *getTail() const { return tail; }
   size_t getSize() const { return size; }
   bool isEmpty() const
   {
      return head == nullptr;
   }

   LinkedList<T> *insertHead(Node<T> *node)
   {
      setHead(node);
      return this;
   }

   LinkedList<T> *insertHead(T key)
   {
      return insertHead(new Node<T>(key));
   }
};

int main()
{
   Node<int> *node = new Node<int>(7);
   cout << *node << endl;

   LinkedList<int> *list = new LinkedList<int>(node);
   // list->insertHead(new Node<int>(5));
   LinkedList<int> *listKey = new LinkedList<int>(node);

   list->insertHead(8)->insertHead(10);
}