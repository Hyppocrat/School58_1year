#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int a[2000013];
// a[i] - сколько раз число i встретилось во входных данных
// -1000000 -> 0
// -1000000 + 1 -> 1
// ...
// 0 -> 1000000
// ...
// 1000000 -> 2000000
int main(){
    long long n, t, k;
    cin >> n;
    for(int i = 0; i <= 2000000; ++i){
        a[i] = 0;
    }
    for(int i = 0; i < n; ++i){
        cin >> t;
        ++a[t + 1000000];
    }
    for(int i = 0; i <= 2000000; ++i){
        for(int j = 0; j < a[i]; ++j){
            cout << i - 1000000 << " ";
        }
    }
}


#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[300];
    for(int i = 0; i < 300; ++i){
        a[i] = 0;
    }
    char s[113];
    gets(s);
    int n = strlen(s);
    for(int i = 0; i < n; ++i){
        ++a[s[i]];
    }
    int ans = 0;
    for(char i = 'A'; i <= 'Z'; ++i){
        ans += a[i];
    }
    cout << ans;
}
