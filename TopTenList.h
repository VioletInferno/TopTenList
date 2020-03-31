//Manages a list of top ten hyperlinks
#ifndef TOPTENLIST_H
#define TOPTENLIST_H
#include <string>
#include <vector>
#include "Hyperlink.h"
#include "IDirectionable.h"

using std::string;
using std::vector;
using std::cout;
using std::endl;

class TopTenList : public IDirectionable
{
  private:
    vector <HyperLink> _list;

  public:
    TopTenList();
    void display_forward();    
    void display_backward();    
    void set_at(int index, HyperLink link);
    HyperLink get(int index);
};

#endif
