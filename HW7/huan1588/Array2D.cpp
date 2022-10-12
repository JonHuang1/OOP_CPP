#include <iostream>
#include <cstdlib>
#include "Array2D.h"

// This constructor is delegated to by other constructors and does all of the 
// allocation, showing an example of a delegating constructor..  
Array2D::Array2D(int numR, int numC, char differentiator) : numRows(numR), numCols(numC) {

   ary = new int*[numRows];
   for (int i = 0; i < numRows; i++) {
      ary[i] = new int[numCols];
      for (int j = 0; j < numCols; j++) {
            ary[i][j] = -1;
      }
   }
}

Array2D::Array2D(int numR, int numC) : Array2D(numR, numC, 'c') { 
   for (int i = 0; i < numRows; i++) {
      for (int j = 0; j < numCols; j++) {
         ary[i][j] = i;
      }
   }
}

Array2D::Array2D(int numR, int numC, int val) : Array2D(numR, numC, 'c') { 
   for (int i = 0; i < numRows; i++) {
      for (int j = 0; j < numCols; j++) {
         ary[i][j] = val;
      }
   }
}

int& Array2D::operator( )(int row, int col) {
   return ary[row][col];
}
      
int Array2D::operator( )(int row, int col) const {
   return ary[row][col];
}
 
bool Array2D::sameSize(const Array2D& other) const {
   return (numRows == other.getNumRows( ) && numCols == other.getNumCols( ));
}

void Array2D::deleteAry(int** ary) {
   for (int i = 0; i < numRows; i++) {
      delete [ ] ary[i];
   }
   delete [ ] ary;
}

// To Implement
Array2D::Array2D(const Array2D& other) : Array2D(other.getNumRows(), other.getNumCols()) {
   for (int i=0; i<numRows; i++)
   {
      for (int j=0; j<numCols; j++)
      {
         ary[i][j] = other.ary[i][j];
      }
   }
}

Array2D::~Array2D( ) {
   deleteAry(ary);
   // std::cout << "deleting array" << std::endl;
}

Array2D& Array2D::operator=(const Array2D& p1) {
   Array2D(p1.getNumRows(), p1.getNumCols());
   for (int i=0; i<numRows; i++)
   {
      for (int j=0; j<numCols; j++)
      {
         ary[i][j] = p1.ary[i][j];
      }
   }

   return *this;
}

bool Array2D::operator==(const Array2D& p1) const {
   if (sameSize(p1) == false)
   {
      return false;
   }
   for (int i=0; i<numRows; i++)
   {
      for (int j=0; j<numCols; j++)
      {
         if (ary[i][j] != p1.ary[i][j])
         {
            return false;
         }
      }
   }
   return true;
}

Array2D Array2D::operator*(const Array2D& p1) {
   Array2D product(numRows, p1.getNumCols(), -1);
   int temp;
   if(getNumCols() != p1.getNumRows())
   {
      return product;
   }
   
   for (int i=0; i<numRows; i++)
   {
      for (int j=0; j<p1.getNumCols(); j++)
      {
         product.ary[i][j] = 0;
         for (int k=0; k<numCols; k++)
         {
            product.ary[i][j] += ary[i][k] * p1.ary[k][j];
         }
      }
   }
   return product;
}

std::ostream& operator<<(std::ostream& os, const Array2D& p1) {
   int rows = p1.getNumRows();
   int cols = p1.getNumCols();

   for (int i=0; i<rows; i++)
   {
      for (int j=0; j<cols; j++)
      {
         std::cout << p1.ary[i][j] << " ";
      }
      std::cout << std::endl;
   }
   return os;
}

int Array2D::getNumRows( ) const{
   return numRows;
}

int Array2D::getNumCols( ) const{
   return numCols;
}