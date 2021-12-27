#include <iostream>
#include <string>

using namespace std;


class Item
{
public:
   Item();

   Item(string _name, long _id, double _price, int _count);
   string name;
   long id;
   double price;
   int count;
};

