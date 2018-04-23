#include "node.h"


Node::Node(int value, Node*& left, Node*& right) : value(value), height(1), left(left), right(right){}
Node::Node(int value) : value(value), height(1), left(nullptr), right(nullptr){}

int 
Node::get_value(){
  return this->value;
}

int 
Node::get_height(){
  return this->height;
}

Node*& 
Node::get_left(){
  return this->left;
}

Node*&
Node::get_right(){
  return this->right;
}

void  
Node::set_value(int value){
  this->value = value;
}

void  
Node::set_height(int height){
  this->height = height;
}

void  
Node::set_left(Node*& left){
  this->left = left;
}

void  
Node::set_right(Node*& right){
  this->right = right;
}
    
