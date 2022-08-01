#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> moveElementToEnd(vector<int>& array, int toMove);

int main()
{
    vector<int> arrayV = { 2, 1, 2, 2, 2, 3, 4, 2 };
    moveElementToEnd(arrayV, 2);

    for (int number : arrayV)
    {
        cout << number << " ";
    }
    return 0;
}

    vector<int> moveElementToEnd(vector<int> &arrayV, int toMove)
    {
        // Write your code here.


        int leftidx = 0;
        int rightidx = arrayV.size() - 1;
        if (arrayV.empty()) return{};

        while (leftidx < rightidx)
        {

            while (leftidx < rightidx && arrayV[rightidx] == toMove)
                rightidx--;
            if (arrayV[leftidx] == toMove)
                swap(arrayV[leftidx], arrayV[rightidx]);
            leftidx++;
        }
        return arrayV;
    }
