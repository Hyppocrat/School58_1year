//найти максимальное из 2 чисел
#include <iostream>
using namespace std;
int main(){
  int a, b;
  cin >> a >> b;
  if (a > b){
    cout << a;
  }
  else {
    cout << b;
  }
}

//проверить число на двузначность. способ 1
#include <iostream>
using namespace std;
int main(){
  int a;
  cin >> a;
  if ((a > 9) && (a < 100)){
    cout << "YES";
  }
  else {
    cout << "NO";
  }
}

//проверить число на двузначность. способ 2
#include <iostream>
using namespace std;
int main(){
  int a;
  cin >> a;
  if ((a <= 9) || (a >= 100)){
    cout << "YES";
  }
  else {
    cout << "NO";
  }
}

//упорядочить три числа по возрастанию
#include <iostream>
using namespace std;
int main(){
  int a, b, c;
  cin >> a >> b >> c;
  if (a > b){
    swap(a, b);
  }
  if (a > c){
    swap(a, c);
  }
  if (b > c){
    swap(b, c);
  }
  cout << a << " " << b << " " << c;
}
