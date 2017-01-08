#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]) {

    int i,j, participants, budget, hotelsnumber, weeksnumber, price, beds, cost, anterior;

    while (scanf("%d %d %d %d\n", &participants, &budget, &hotelsnumber, &weeksnumber) != EOF) {
        cost = 0;
        anterior = 500001;

        for (i = 0; i < hotelsnumber; i++){
            cin >> price;

            for(j = 0; j < weeksnumber; j++){
                cin >> beds;

                if (beds >= participants){
                    cost = participants*price;

                    if(cost < anterior){
                        anterior = cost;
                    }
                }
            }
        }

        if(anterior <= budget){
            cout << anterior << '\n';
        }
        else{
            cout << "stay home" << '\n';
        }

    }
/*
    cin >> participants >> budget >> hotelsnumber >> weeksnumber;

    for (i = 0; i < hotelsnumber; i++){
        cin >> price;

        for(j = 0; j < weeksnumber; j++){
            cin >> beds;

            if (beds >= participants){
                cost = participants*price;

                if(cost < anterior){
                    anterior = cost;
                }
            }
        }
    }
*/

    return 0;
}
