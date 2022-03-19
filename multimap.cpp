#include <iostream>
#include <map>
using namespace std;
int main ()
{
multimap<char,int> food,chocobar; 
food.insert (make_pair('p',20));
food.insert (make_pair('q',45));
chocobar.insert (make_pair('y',128));
chocobar.insert (make_pair('y',178));
// food ({{p,20},{q,45}}) vs chocobar ({y,128},{y,178}}):
if (food==chocobar) cout << "food and chocobar are equal\n";
if (food!=chocobar) cout << "food and chocobar are not equal\n";
if (food< chocobar) cout << "food is less than chocobar\n";
if (food> chocobar) cout << "food is greater than chocobar\n";
if (food<=chocobar) cout << "food is less than or equal to chocobar\n";
if (food>=chocobar) cout << "food is greater than or equal to chocochocobar\n";
return 0;
}
