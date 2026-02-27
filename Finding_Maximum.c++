#include <iostream>
using namespace std;
void score(int *s)
{
    int *ptr = new int[*s];
    int *ptrrr = ptr;
    for (int i = 0; i < *s; i++, ptr++)
    {
        cout << "Enter score for teacher " << i + 1 << " :";
        cin >> *ptr;
    }
    for (int i = 0; i < *s; i++, ptrrr++)
    {
        cout << "Teacher " << i + 1 << ":" << *ptrrr << endl;
    }
}
int main()
{
    int size;
    cout << "Enter Number of teachers: ";
    cin >> size;
    score(&size);

    return 0;
}