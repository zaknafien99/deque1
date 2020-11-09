// deque1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    // create empty deque of strings
    deque<string> coll;

    // insert several elements
    coll.assign(3, string("string"));
    coll.push_back("last string");
    coll.push_front("first string");

    // print elements separated by newlines
    copy(coll.cbegin(), coll.cend(), ostream_iterator<string>(cout, "\n"));
    cout << endl;

    // remove first and last element
    coll.pop_front();
    coll.pop_back();

    // insert "another" into every element but the first
    for (unsigned i = 1; i < coll.size(); ++i)
    {
        coll[i] = "another " + coll[i];
    }

    // change size to four elements
    coll.resize(4, "resized string");

    // print elements separated by newlines
    copy(coll.cbegin(), coll.cend(), ostream_iterator<string>(cout, "\n"));
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
