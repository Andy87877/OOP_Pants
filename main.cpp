#include <iostream>
#include "Pants.h"
using namespace std;

void Pants::Color (string C) {
    color = C;
}

void Pants::Size (int S) {
    size = S;
}


int main() {
    int S, resize;
    string C,end;


    cout << "color size :";
    cin >> C >> S;
    Pants rect;
    rect.Color(C);
    rect.Size(S);

    cout << "resize ?(0 :no, 1 :resize to 1, 2 :resize to 2 ......)";
    cin >> resize;
    if (resize != 0){
        rect.Size(resize);
    }

    cout << "buy it? (y for yes, other for no.)";
    cin >> end;
    if (end != "y"){
        cout << "see tou next time !";
    } else {
        cout << "you get a " << rect.ans_Color() << " pants in " << rect.ans_Size() << " size !";
    }
}
