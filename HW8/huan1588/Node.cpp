/*
#include <iostream>
#include "Int.h"
#include "Node.h"

template <typename Int> Node<Int>::Node( ) {   }

template <typename Int> Node<Int>::Node(const Int& val) {
   data = val;
}

template <typename Int> void Node<Int>::print( ) const {
   if (this->left != nullptr) {
      this->left->print( );
   }
   std::cout << data << " ";
   if (this->right != nullptr) {
      this->right->print( );
   }
}

template <typename Int> Node<Int>* Node<Int>::insertNode(const Int& n) {
   if (this->data == n) return this;
   if (n < this->data) {
      if (left != nullptr) return left->insertNode(n); 
      else {
         left = new Node<Int>(n);
         return left;
      }
   }
   if (n > this->data) {
      if (right != nullptr) return right->insertNode(n); 
      else {
         right = new Node<Int>(n);
         return left;
      }
   }
   return nullptr;
}
*/