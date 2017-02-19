#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>


using namespace std;

int main(int argc, char const *argv[]) {

    int l,i;
    char string[3];

    while(scanf("%d",&l) != EOF && l != 0){

        char wire = 'x',sinal = '+';

        for(i = 0; i < l - 1 ;i++){
            scanf("%s\n",string);

            if(string[0] == 'N'){
                continue;
            }

            if((wire == 'x' && string[0] == '-') || (wire == string[1] && string[0] == '+')){
                if(sinal == '-'){
                    sinal = '+';
                }
                else{
                    sinal = '-';
                }
            }

            /*
            if(wire == 'x'){
                sinal = string[0];
            }
            else if (wire == string[1] && sinal == string[0]){
                sinal = '-';
            }*/

            if (wire == 'x'){
                wire = string[1];
                //cout <<"teste" << wire << '\n';
            }
            else if(wire == string[1]){
                wire = 'x';
                //cout << "passou" << '\n';
            }

        }
        cout << sinal << wire<< endl;

    }


    return 0;
}
