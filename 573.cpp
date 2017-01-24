#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]) {

    int h,u,d,f;

    while (scanf("%d %d %d %d\n", &h, &u, &d, &f) != EOF && h != 0){

        //cout << "entrada "<<h<<" " << u << " "<< d << " "<< f << '\n';
        float distance = 0,movement = u, fatigate = movement*(f/100.0);
        int days = 0;

        while(true){

            days++;
            distance += movement;

            if(distance > h){
                cout << "success on day "<< days << '\n';
                break;
            }
            distance -= d;
            if(distance < 0){
                cout << "failure on day "<< days << '\n';
                break;
            }
            movement -=fatigate;

            if(movement < 0)
                movement = 0;



            //cout << "movimento"<< movement << '\n';
            //cout << "distancia"<< d << '\n';

            //cout << movement - (double)(f/100)*u<< '\n';
            //cout << "movimento calculado"<<fatigate<< '\n';








            /*if (days == 4){
                cout << "distance "<< distance << '\n';
            }*/

            //cout << distance << '\n';
        }

        //cout << "pos calculop"<<distance<< '\n';



    }


    return 0;
}
