#ifndef NODE_H
#define NODE_H


class Node{
  private:
    int value;
    int height;
    Node* left;
    Node* right;

  public:
    Node(int value);
    Node(int value, Node*& left, Node*& right);
    
    int get_value();
    int get_height();
    Node*& get_left();
    Node*& get_right();
    
    void set_value(int value);
    void set_height(int height);
    void set_left(Node*& left);
    void set_right(Node*& right);
    
};

#endif
