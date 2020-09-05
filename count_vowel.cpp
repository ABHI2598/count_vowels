#include <iostream>
using namespace std;

int main() {
   char str[30], *pt;
   int i = 0, c = 0;
   cout << "Enter string : ";
   cin>>str;
   pt = str;
   while (*pt != '\0') {
      if (*pt == 'a' || *pt == 'e' || *pt == 'i' || *pt == 'o' || *pt == 'u')
         c++;
      i++;
      pt++;
   }
   cout << "Length of String : " << i << endl;
   cout << "Vowels Count in the String : " << c << endl;
   cout << "Consonent Count in the String : " << (i - c) <<endl;
   return 0;
}
