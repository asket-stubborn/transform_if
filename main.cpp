#include <iostream>
#include <algorithm>
using namespace std;

template<class InputIt, class OutputIt>
OutputIt sideways_merge(InputIt first1, InputIt last1,
               InputIt first2, InputIt last2,
               OutputIt d_first)
{
    for (; first1 != last1; ++d_first) {
        if (first2 == last2) {
            return std::copy(first1, last1, d_first);
        }
        if (*first2 < *first1) {
            *d_first = *first2;
            ++first2;
        } else {
            *d_first = *first1;
            ++first1;
        }
    }
    return std::copy(first2, last2, d_first);
}
int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
