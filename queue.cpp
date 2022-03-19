#include <iostream>
#include <queue>
using namespace std;
void queueDemoshow(queue <int> gq1)
{
queue <int> g1 = gq1;
while (!g1.empty())
{
cout << '\t' << g1.front();
g1.pop();
}
cout << '\n';
}
int main()
{
queue <int> queuedemo;
queuedemo.push(10);
queuedemo.push(20);
queuedemo.push(30);
cout << "elements in the queue are : ";
queueDemoshow(queuedemo);
cout << "\nPrinting the size of the queue (queuedemo.size()) : " << queuedemo.size();
cout << "\nPrinting the first elemnt from the queue (queuedemo.front()) : " << queuedemo.front();
cout << "\nPrintitng the last element from the queue (queuedemo.back()) : " << queuedemo.back();
cout << "\nUse of pop () method (queuedemo.pop()) : ";
queuedemo.pop();
queueDemoshow(queuedemo);
return 0;
}
