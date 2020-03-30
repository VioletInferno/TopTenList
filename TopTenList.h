//Manages a list of top ten hyperlinks
#ifndef TOPTENLIST_H
#define TOPTENLIST_H
#include <string>
#include <vector>
#include "Hyperlink.h"

using std::string;
using std::vector;

class TopTenList : public vector <HyperLink>
{
  private:
    vector <HyperLink> _list;

  public:
    TopTenList();
    void set_at(int index, HyperLink link);
    HyperLink get(int index);
};

#endif
