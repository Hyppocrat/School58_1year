#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int n;
    cin >> n;
    char ch[113];
    for(int i = 0; i < n; i++){
        cin >> ch[i];
    }
    cout << ch;
    //gets(ch);
    //gets(ch);
    //n = strlen(ch);
    //cout << ch;
    //for(int i = 1; i < n; i += 2){
    //    cout << ch[i];
    //}
    //cin >> ch;
    //cout << ch;
    //cin >> ch;
    /*ch = getchar();
    int cnt = 0;
    while (ch != '.'){
        if (ch == ' '){
            cnt++;
        }
        int code = ch;
        cout << code << " ";
        //cin >> ch;
        ch = getchar();
    }
    cout << cnt;*/
    /*ch = tolower(ch);
    cout << ch << " ";
    ch = toupper(ch);
    cout << ch;*/
    //int val = isupper(ch);
    //cout << isalnum('a') << " " << isalnum('A') << " " << isalnum('1');
    /*if (isupper(ch)){ // символ - большая буква?
        ...
    }
    if (islower(ch)){ // маленькая буква?
        ...
    }
    if (isdigit(ch)){ // цифра?
        ...
    }
    if (isalpha(ch)){ // буква?
        ...
    }
    if (isalnum(ch)){ // буква или цифра?
            
    }*/
}
