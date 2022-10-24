#ifndef NODE_H_
#define NODE_H_
#include <iostream>
#include "Int.h"
#include "Float.h"

template <typename TPL> class Node { 
private:
   TPL data;
   Node* left = nullptr;
   Node* right = nullptr;
public:
   Node( );
   Node(const TPL& val);
   virtual void print( ) const;
   virtual Node* insertNode(const TPL& n);
};

template <typename TPL> Node<TPL>::Node( ) {   }

template <typename TPL> Node<TPL>::Node(const TPL& val) {
   data = val;
}

template <typename TPL> void Node<TPL>::print( ) const {
   if (this->left != nullptr) {
      this->left->print( );
   }
   std::cout << data << " ";
   if (this->right != nullptr) {
      this->right->print( );
   }
}

template <typename TPL> Node<TPL>* Node<TPL>::insertNode(const TPL& n) {
   if (this->data == n) return this;
   if (n < this->data) {
      if (left != nullptr) return left->insertNode(n); 
      else {
         std::cout << "inserting: " << n << std::endl;
         left = new Node<TPL>(n);
         return left;
      }
   }
   if (n > this->data) {
      if (right != nullptr) return right->insertNode(n); 
      else {
         std::cout << "inserting: " << n << std::endl;
         right = new Node<TPL>(n);
         return left;
      }
   }
   return nullptr;
}

#endif /* NODE_H_ */
