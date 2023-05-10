#include <iostream>
using namespace std;
int main() {
int lista[10];
    for(int i=0; i<10; i++){
    cin >> lista[i];
    }
    int a=0;
    cin >> a;

    if (a>lista[9]){
    for (int i=0; i<10; i++){
        cout<<lista[i]<<"";
    }}
    else{


    for(int i=0;i<10;i++){
        for(; lista[i]<a;i++){
        cout << lista[i] << " ";

    }}}
    return 0;
}
