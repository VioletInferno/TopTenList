//Manages a list of top ten hyperlinks
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;

TopTenList::TopTenList()
{
    _list.resize(10);  // technique is called delegation
}

void TopTenList::set_at(int index, HyperLink link)
{
    _list.at(index - 1) = link;
}

HyperLink TopTenList::get(int index)
{
    _list.at(index - 1);
}
