#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {

    int i,j,rfp = 0,numberofrequeriments, numberofproposals,numberofreqmet,nrchoice;
    string  agencies, currentagency;
    string x;
    float price, currentprice;

    while(scanf("%d %d\n",&numberofrequeriments,&numberofproposals) != EOF){

        if (numberofproposals == 0 && numberofrequeriments == 0) {
            break;
        }

        rfp++;
        nrchoice = 0;
        price = 0;
        string requirements;
        for(i = 0; i < numberofrequeriments; i++){
            cin.ignore();
            getline(cin, x);
        }

        for(i = 0; i < numberofproposals; i++){

            getline(cin,currentagency);
            scanf("%f %d\n",&currentprice,&numberofreqmet);

            if(numberofreqmet > nrchoice){
                nrchoice = numberofreqmet;
                agencies = currentagency;
                price = currentprice;
            }
            else if(numberofreqmet == nrchoice && currentprice < price){
                nrchoice = numberofreqmet;
                agencies = currentagency;
                price = currentprice;
            }

            for(j = 0; j < numberofreqmet; j++){
                getline(cin,requirements);
            }

            //cout << "interação" << i << '\n';

        }
        if(rfp > 1)
            cout << endl;
        cout << "RFP #" << rfp << endl;
        cout << agencies << endl;

    }
    return 0;
}
