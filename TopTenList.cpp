//Manages a list of top ten hyperlinks
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

TopTenList::TopTenList()
{
    _list.resize(10);  // technique is called delegation
}

void TopTenList::set_at(int index, HyperLink link)
{
    _list.at(index - 1) = link;
}

void TopTenList::display_forward()
{
    for (int i = 0; i < _list.size(); i++)
    {
        HyperLink links = _list[i];
        cout << i + 1 << ") " << links.text << " " << links.url << endl;
    }
}   

void TopTenList::display_backward()
{
    for (int i = 1; i <= _list.size(); i++)
    {
        HyperLink links = _list[_list.size() - i];
        cout << _list.size() - i + 1 << ") " << links.text << " " << links.url << endl;
    }
}  

HyperLink TopTenList::get(int index)
{
    _list.at(index - 1);
}
