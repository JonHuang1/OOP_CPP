#ifndef ARRAY2D_H_
#define ARRAY2D_H_
#include <iostream>
class Array2D {

public:
   Array2D(int numR, int numC); 
   Array2D(int numR, int numC, int val); 
   Array2D(const Array2D& other);

   virtual int& operator( )(int row, int col);
   virtual int operator( )(int row, int col) const;

   ~Array2D();
   virtual Array2D& operator=(const Array2D& p1);
   virtual bool operator==(const Array2D& p1) const;
   virtual Array2D operator*(const Array2D& p1);
   friend std::ostream& operator<<(std::ostream& os, const Array2D& p1);
   virtual int getNumRows( ) const;
   virtual int getNumCols( ) const;

private:
   Array2D(int numR, int numC, char differentiator);
   void deleteAry(int** ary);
   bool sameSize(const Array2D& other) const;

   int numRows;
   int numCols;
   int** ary;
};
#endif /* ARRAY2D_H_ */
