#include <iostream>
#include <string>

using namespace std;

void HelpMe(int *p, int *num, int *q);
void WhereAmI(int *p, int *q, int a);

void HelpMe(int *p, int *num, int *q) {
 int a;

 a = 2;
 q = &a;
 *p = *q + *num;
 num = p;
}


void WhereAmI(int *p, int *q, int a) {
 a = 6;
 *p = a + *p;
 *q = a + 3;
 HelpMe(q, &a, p);
}


int main() {
 int *p;
 int q;
 int *num;
 int a;

 a = 3;
 q = 5;
 p = &a;
 num = &q;

 HelpMe(&a, p, num);
 WhereAmI(&q, p, *num);

 cout << "*p = " << *p << " q = " << q << " *num = " << *num << endl;
 
 std::string str ("Test string");
  for ( std::string::iterator it=str.begin(); it!=str.end(); it++)
    if(isupper(*it)) cout << "An upper!" << endl;
  std::cout << '\n';
  
 return 0;
}
