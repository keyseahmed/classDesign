
void Store::addItems(Item i)
{
   items[size++] = i;
}

void Store::printDetails()
{
   for (int i = 0; i < size; ++i)
   {
       cout << items[i].name << " X " << items[i].count << "\n";
   }
}