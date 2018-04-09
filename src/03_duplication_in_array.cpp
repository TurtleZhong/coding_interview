#include <iostream>
#include <vector>

/**
 * 找出数组中重复的数字
 */

using namespace std;

vector<int> duplicate(int data[], int length)
{
    vector<int> results;
    if(data == nullptr || length <= 0)
        return results;
    for(int i = 0; i < length; ++i)
    {
        if(data[i] < 0 || data[i] > length -1)
        {
            cerr << "The data is bad, please check the data." << endl;
            return results;
        }
    }

    for(int i = 0; i < length; ++i)
    {
        bool flag = false;
        while (data[i] != i && (!flag))
        {
            if(data[i] == data[data[i]])
            {
                results.push_back(data[i]);
                flag = true;
            }

            int tmp = data[data[i]];
            data[data[i]] = data[i];
            data[i] = tmp;

        }
    }
    return results;

}


int main()
{
    int array[7] = {2, 3, 1, 0, 2, 5, 3};
    vector<int> results = duplicate(array, sizeof(array) / sizeof(array[0]));
    for(int i = 0; i < results.size(); ++i)
    {
        cout << results[i] << endl;
    }
    int middle = ((6 - 1) >> 1) + 1;
    cout << "middle = " << middle << endl;
    return 0;
}