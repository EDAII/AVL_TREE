#include <bits/stdc++.h>
#include "node.h"
#include "avl_tree.h"
using namespace std;

int main(){
  AVLTree* tree = new AVLTree();

//  tree->insert(25);
//  tree->insert(20);
//  tree->insert(15);

  cout << "Inserting 20" << endl;
  tree->insert(20);
  cout << "Inserting 23" << endl;
  tree->insert(23);
  cout << "Inserting 25" << endl;
  tree->insert(25);
  cout << "Inserting 7" << endl;
  tree->insert(7);
  cout << "Inserting 10" << endl;
  tree->insert(10);
  cout << "Inserting 35" << endl;
  tree->insert(35);
  cout << "Inserting 33" << endl;
  tree->insert(33);
  cout << "Inserting 1" << endl;
  tree->insert(1);
  cout << "Inserting 3" << endl;
  tree->insert(3);

  tree->print();


  cout << "finding 7" << endl;
  
  Node* find = tree->find(7);

  if(find != nullptr){
    cout << find->get_value() << endl;
  } else {
    cout << "Not found" << endl;
  }
  
  cout << "finding 70" << endl;
  find = tree->find(70);

  if(find != nullptr){
    cout << find->get_value() << endl;
  } else {
    cout << "Not found" << endl;
  }


  cout << "Deleting 78" << endl;
  tree->deleteNode(78);
  cout << "Deleting 33" << endl;
  tree->deleteNode(33);
  cout << "Deleting 25" << endl;
  tree->deleteNode(25);
  cout << "Deleting 3" << endl;
  tree->deleteNode(3);
  cout << "Deleting 1" << endl;
  tree->deleteNode(1);
  cout << "Deleting 7" << endl;
  tree->deleteNode(7);

  tree->print();

	return 0;
}
