#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

    int ncases,scary,velocity,i,j,selected;

    cin >> ncases;

    for(i = 0; i < ncases; i++){
        selected = 0;
        cin >> scary;

        for (j = 0; j < scary; j++) {
            cin >> velocity;

            if(velocity > selected){
                selected = velocity;
            }
        }

        cout << "Case " << i+1 << ": " << selected << '\n';

    }

    return 0;
}
