#include <iostream>
#include "stack.hpp"

 Node :: Node()
 {
  data = 0;
  previous = nullptr;
 }
 int Node :: getData()
 {
  return data;
 }
 Node* Node :: getPrevious()
 {
  return previous;
 }
 void Node :: setNode(int d,Node * node)
 {
   data = d;
   previous = node;
 }

 Stack :: Stack()
 {
  upper = nullptr;
 }
 void Stack :: push(int data)
 {
   Node * node = new Node;
   (*node).setNode(data,upper);
   upper = node;
 }
 int Stack :: pop()
 {
  int data = (*upper).getData();
  Node * previous = (*upper).getPrevious();
  delete upper;
  upper = previous;
  return data;
 }
 int Stack :: top()
 {
  return (*upper).getData();
 }
 bool Stack :: isEmpty()
 {
   if(upper == nullptr)
   {
     return true;
   }else{
     return false;
   }
 }


