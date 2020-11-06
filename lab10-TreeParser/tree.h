#ifndef _TREE_H_
#define _TREE_H_

#include <iostream>

using namespace std;

class BinarySearchTree
{
   public:

    // build an empty tree
    BinarySearchTree();
    // determine if a tree is empty.  
    bool isEmpty() {return count_==0;}
    // insert a string as the 'key'.  There is no separate data pointer in this implementation
    void insert(string str);
    // get the value stored in the root
    string getRoot() {return root_->data_;}
    // keep track of the number of nodes as we go
    int nodeCount() {return count_;}

    // wrappers for the three traversals
    void inOrder() {inOrderHelper(root_);}
    void preOrder() {preOrderHelper(root_);}
    void postOrder() {postOrderHelper(root_);}

    // more wrappers for recusrive functions we've written
    int height() {return heightHelper(root_);}
    int countNodes() {return countNodesHelper(root_);}
    bool isMember(string str) {return isMemberHelper(root_, str);}

   private:
    // private subclass for the Nodes
    class Node
    {
        /// public members of a private subclass
        /// can _only_ be seen by the members of the 
        /// subclass.
        public:
          Node(string s, Node* parent, Node* left, Node* right);
          Node* parent_;
          Node* left_;
          Node* right_; 
          string data_;
    };

    // private member functions

    // These are recursive methods called by the public wrapper 
    // functions.
    void insertHelper(Node* &rootOfSubtree, Node* parent, string stringToInsert);
    void inOrderHelper(Node* rootOfSubtree);
    void preOrderHelper(Node* rootOfSubtree);
    void postOrderHelper(Node* rootOfSubtree);
    int heightHelper(Node* rootOfSubtree);
    int countNodesHelper(Node* rootOfSubtree);
    bool isMemberHelper(Node* rootOfSubtree, string str);

    // private properties
    Node* root_;
    int count_;    /// maintained in insert()
};

#endif
