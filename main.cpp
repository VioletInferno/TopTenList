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

    cpp.text = "C";
    cpp.url = "https://www.cprogramming.com/";
    languages->set_at(2, cpp);

    cpp.text = "python";
    cpp.url = "https://www.python.org/";
    languages->set_at(3, cpp);

    cpp.text = "Rust";
    cpp.url = "https://www.rust-lang.org/";
    languages->set_at(4, cpp);

    cpp.text = "Common-Lisp";
    cpp.url = "https://common-lisp.net/";
    languages->set_at(5, cpp);

    cpp.text = "Go";
    cpp.url = "https://golang.org/";
    languages->set_at(6, cpp);    

    cpp.text = "Perl";
    cpp.url = "https://www.perl.org/";
    languages->set_at(7, cpp);

    cpp.text = "JavaScript";
    cpp.url = "https://developer.mozilla.org/en-US/docs/Web/JavaScript";
    languages->set_at(8, cpp);

    cpp.text = "Java";
    cpp.url = "https://www.java.com/en/";
    languages->set_at(9, cpp);

    cpp.text = "Julia";
    cpp.url = "https://julialang.org/";
    languages->set_at(10, cpp);

    languages->display_forward();
    cout << endl;
    languages->display_backward();
    return 0;
}
