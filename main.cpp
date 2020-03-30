#include <iostream>
#include <vector>
#include "Hyperlink.h"
#include "TopTenList.h"

using std::cout;

int main()
{
    TopTenList* languages = new TopTenList();
    HyperLink cpp;

    cpp.text = "C++";
    cpp.url = "https://www.cplusplus.com/";
    languages->set_at(1, cpp);

    // line below is arguably an antipattern
    //languages->resize(100);

    return 0;
}
