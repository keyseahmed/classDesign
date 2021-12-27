
#include "Item.h"

class Store
{
   Item items[100];
   int size = 0;
public:

   void addItems(Item i);

   void printDetails();
};

