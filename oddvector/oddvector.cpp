#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>
using namespace std;

  // Remove the odd integers from v.
  // It is acceptable if the order of the remaining even integers is not
  // the same as in the original vector.
void removeOdd(vector<int>& v)
{
    for (size_t i = 0; i != v.size();) {
        if (v.at(i) % 2 == 1)
            v.erase(v.begin() + i);
        else
            i ++;
    }
}

void test()
{
    int a[9] = { 5, 2, 8, 9, 6, 7, 3, 4, 1 };
    vector<int> x(a, a+9);  // construct x from the array
    assert(x.size() == 9 && x.front() == 5 && x.back() == 1);
    removeOdd(x);
    assert(x.size() == 4);
    sort(x.begin(), x.end());
    int expect[4] = { 2, 4, 6, 8 };
    for (int k = 0; k < 4; k++)
        assert(x[k] == expect[k]);
}

int main()
{
    test();
    cout << "Passed" << endl;
}
