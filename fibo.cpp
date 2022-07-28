#include <iostream> 
#include <stack> 
using namespace std;
int main() {
    stack<long long int> stack;
    stack.push(0);
    stack.push(1);
    long long int n;
    cin>>n;
    for (long long int i = 2; i < n; i++)
    {
        long long int first = stack.top();
        stack.pop();
        long long int second = stack.top();
        long long int third =  first + second;
        stack.push(first);
        stack.push(third);
    }
     cout<<stack.top()<<endl;
}