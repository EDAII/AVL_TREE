#ifndef AVLTREE_H
#define AVLTREE_H
#include "node.h"

class AVLTree{
  private:
    Node* root;
    Node* find(int element, Node* root);
    Node*& insert(int value, Node*& root);
    void print(Node* root);
    int get_height(Node* root);
    int get_balance(Node* root);
    void balance(Node*& root, int element);
    Node*& right_rotate(Node*& root);
    Node*& left_rotate(Node*& root);
    int deleteMinimumNode(Node*& root);
    void deleteNode(int value, Node*& root);
    void inorder(Node*& root);
  public:
    void print();
    Node* find(int element);
    Node*& insert(int value);
    void deleteNode(int value);
    void inorder();

};

#endif
