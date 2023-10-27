#include <iostream>
using namespace std;

int main(){
   int n; cin >> n;
   if (n * (n + 1) % 4 != 0){
      cout << "NO";
   }else if (n % 4 == 0){     //первый случай: n кратно 4
      cout << "YES" << endl << n / 2 << endl;
      for (int i = 1; i < n - i + 2; i += 2)
         cout << i << ' ' << n - i + 1 << ' ';
      cout << endl << n / 2 << endl;
      for (int i = 2; i < n - i + 2; i += 2)
         cout << i << ' ' << n - i + 1 << ' ';
   }else{      //второй случай: n + 1 кратно 4
      cout << "YES" << endl << (n + 1) / 2 << endl;
      for (int i = 1; i < n - i + 2; i += 2)
         cout << i << ' ' << n - i << ' ';
      cout << endl << n / 2 << endl;
      for (int i = 2; i < n - i + 1; i += 2)
         cout << i << ' ' << n - i << ' ';
         cout << n;
   }return 0;}
