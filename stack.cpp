#include <iostream>

class Node
{
 private:
 int data;
 Node *previous;
 public:
 Node()
 {
  data = 0;
  previous = nullptr;
 }
 int getData()
 {
  return data;
 }
 Node * getPrevious()
 {
  return previous;
 }
 void setNode(int d,Node * node)
 {
   data = d;
   previous = node;
 }

};

class Stack
{
 private:
 Node * upper;
 public:
 Stack()
 {
  upper = nullptr;
 }
 void push(int data)
 {
   Node * node = new Node;
   (*node).setNode(data,upper);
   upper = node;
 }
 int pop()
 {
  int data = (*upper).getData();
  Node * previous = (*upper).getPrevious();
  delete upper;
  upper = previous;
  return data;
 }
 int top()
 {
  return (*upper).getData();
 }
 bool isEmpty()
 {
   if(upper == nullptr)
   {
     return true;
   }else{
     return false;
   }
 }

};

