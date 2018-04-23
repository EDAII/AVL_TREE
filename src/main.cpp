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
	return 0;
}
