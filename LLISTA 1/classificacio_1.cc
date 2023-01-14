#include <iostream>

using namespace std;

int main() {
   char x = 'a';
   string min = "minuscula";
   string maj = "majuscula";
   string con = "consonant";
   string voc = "vocal";
   cin >> x;

   if (x >= 97) {

       cout << min << endl;
   }

   else cout << maj << endl;

   if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') {

       cout << voc << endl;
   }

   else cout << con << endl;




}
