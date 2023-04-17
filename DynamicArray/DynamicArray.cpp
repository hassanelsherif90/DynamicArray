#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;
    cout << "Enter Total of Stdents ? ";
    cin >> num;

    float* ptr;
    ptr = new float[num];

    for (int i = 0; i < num; i++)
    {
        cout << "Students " << i + 1 << " : ";
        cin >> *(ptr + i);
    }
    cout << "\n\nDisplay Students Grades : " << endl;

    for (int i = 0; i < num; i++)
    {
        cout << "Students " << i + 1 << " : " << *(ptr + i) << endl;
    }

    delete[] ptr;

    return 0;
}
