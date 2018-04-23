#include "avl_tree.h"
#include "node.h"
#include <bits/stdc++.h>

int
AVLTree::get_balance(Node* root){
  if(root == nullptr){
    return 0;
  } else{
    return get_height(root->get_left()) - get_height(root->get_right());
  }
}

int
AVLTree::get_height(Node* root){
  if(root == nullptr){
    return 0;
  } else{
    return root->get_height();
  }
}

Node* 
AVLTree::find(int element, Node* root){
  if(root == nullptr){
    return nullptr;
  }

  if(element == root->get_value()){
    return root;
  }

  if(element < root->get_value()){
    return find(element, root->get_left());
  } else {
    return find(element, root->get_right());
  }
}

Node*& 
AVLTree::insert(int element, Node*& root){
  if(root == nullptr){
    root = new Node(element);
    return root;
  }else if(element < root->get_value()){
    root->set_left(insert(element, root->get_left()));
  }else if(element > root->get_value()){
    root->set_right(insert(element, root->get_right()));
  }else {return root;}

  root->set_height(1 + std::max(get_height(root->get_left()), get_height(root->get_right())));

  this->balance(root, element);

  return root;
}

void
AVLTree::balance(Node*& root, int element){
  int balance = get_balance(root);

  if(balance > 1 && element < root->get_left()->get_value()){
    std::cout << "Right rotate" << std::endl;
    right_rotate(root); 
  }else if(balance < -1 && element > root->get_right()->get_value()){
    std::cout << "Left rotate" << std::endl;
    left_rotate(root);
  }else if(balance > 1 && element > root->get_left()->get_value()){
    std::cout << "Double Right rotate" << std::endl;
    root->set_left(left_rotate(root->get_left()));
    right_rotate(root); 
  }else if(balance < -1 && element < root->get_right()->get_value()){
    std::cout << "Double Left rotate" << std::endl;
    root->set_right(right_rotate(root->get_right()));
    left_rotate(root);
  }
}

Node*&
AVLTree::right_rotate(Node*& root){
  Node* node = new Node(root->get_value(), root->get_left()->get_right(), root->get_right()); 

  root->set_value(root->get_left()->get_value());
  root->set_left(root->get_left()->get_left());
  root->set_right(node);

  root->set_height(std::max(get_height(root->get_left()), get_height(root->get_right())) + 1);
  node->set_height(std::max(get_height(node->get_left()), get_height(node->get_right())) + 1);

  return root;
}

Node*&
AVLTree::left_rotate(Node*& root){
  Node* node = new Node(root->get_value(), root->get_left(), root->get_right()->get_left()); 

  root->set_value(root->get_right()->get_value());
  root->set_right(root->get_right()->get_right());
  root->set_left(node);

  root->set_height(std::max(get_height(root->get_left()), get_height(root->get_right())) + 1);
  node->set_height(std::max(get_height(node->get_left()), get_height(node->get_right())) + 1);

  return root;
}

 
/*****publics methods*******/

void
AVLTree::print(Node* root){
  if(root == nullptr) return;

  print(root->get_left());
  std::cout << "Value: " << root->get_value();
    std::cout << "\tBalance Factor: " << get_balance(root);
  std::cout << "\tHeight: " << root->get_height() << std::endl;
  print(root->get_right());
}

Node* 
AVLTree::find(int element){
  return find(element, this->root);
}

Node*&
AVLTree::insert(int element){
  return insert(element, this->root);
}

void
AVLTree::print(){
  print(this->root);
}
