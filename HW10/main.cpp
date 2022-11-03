#include <iostream>
#include <chrono>
#include <memory>
#include <vector>
#include <mutex>

#include "QuickSort.h"
#include "DotProduct.h"
#include "WorkerQueue.h"

#define NUMSORTS 4
#define STARTSIZE 8000

using namespace std::chrono;
static std::mutex outputLock;
/*
Use either the version of worker. 

void worker(WorkQueue& workQ) {
   std::shared_ptr<Command> c(workQ.get( ));
   while (c != nullptr) {
      c->execute( );
      std::lock_guard<std::mutex> lck(outputLock); 
      c->dentify( );
      c = workQ.get( );
   }
}
*/
void worker(WorkerQueue* workQ) {
   std::shared_ptr<Command> c(workQ->get( ));
   while (c != nullptr) {
      c->execute( );
      std::lock_guard<std::mutex> lck(outputLock); 
      (*c).identify( );
      c = workQ->get( );
   }
}
// */

int main(int argc, char** args) {

   WorkerQueue Q = WorkerQueue();
   int size = STARTSIZE;
   for (int i=0; i<NUMSORTS; i++)
   {
      Q.put(std::shared_ptr<Command> (new DotProduct(size)));
      Q.put(std::shared_ptr<Command> (new QuickSort(size)));
      size *= 2;
   }
   // int sortSize = STARTSIZE;
   // for (int i=0; i<NUMSORTS; i++) {
   //    QuickSort sort = QuickSort(sortSize);
   //    sort.execute();
   //    DotProduct dot = DotProduct(sortSize);
   //    dot.execute();
   //    auto start = high_resolution_clock::now();
   //    sort.sort( );
   //    auto stop = high_resolution_clock::now();
   //    auto duration = duration_cast<microseconds>(stop - start).count( );
   //    std::cout << "Sort of " << sortSize << " ints took " << duration << " microseconds";
   //    std::cout << "sort: " << sort;
   //    sortSize *=2;
   // }
}
