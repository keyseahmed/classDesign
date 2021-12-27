#include 'item.h'
Item::Item()
{
}

Item::Item(string _name, long _id, double _price, int _count)
{
   name = _name;
   id = _id;
   price = _price;
   count = _count;
}
