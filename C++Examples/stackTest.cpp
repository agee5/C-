#include <iostream>
#include <vector>

using namespace std;

vector<int> aStack;
vector<int> aQueue;


int main ()
{
    aStack.push(10);
    aStack.push(aStack.top()+10);
    aQueue.push(aStack.top()+10);
    aQueue.push(aStack.top()+10);
    aQueue.push(aQueue.front()+10);

    cout << aQueue.front() << endl;


    return 1;
}
