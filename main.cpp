#include <iostream>
using namespace std;
#include "lib.h"
int main() {
    char a;
    cin>>a;
    if (carattere(a)==true){
        cout<<lettera(a);
    } else {cout<<"errore";}

}
