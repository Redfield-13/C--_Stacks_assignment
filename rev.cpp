#include <iostream> 
#include <stack> 
using namespace std;
int main() {
    stack<char> stack;
    string str;
    cin>>str;
    int leng = str.size();
    for (size_t i = 0; i < leng; i++)
    {
       stack.push(str[i]);
    }
    for (size_t l = 0; l < leng; l++)
    {
        cout<<stack.top();
        stack.pop();
    } 
    cout<<""<<endl;   
}