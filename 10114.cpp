#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {

    int i, nmonths, ndepreciations, month,vec;
    double downpayment, loan, depreciation,carvalue,payment;


    while(true){
        cin >> nmonths >> downpayment >> loan >> ndepreciations;
        vec = 0;
        payment = loan/nmonths;
        carvalue = loan + downpayment;
        vector<int> vectormonth;
        vector<double> vectordepreciation;
        //cout << nmonths << downpayment << loan << ndepreciation << '\n';

        if(nmonths < 0){
            return 0;
        }



        for (i = 0; i < ndepreciations; i++){
            cin >> month >> depreciation;
            vectormonth.push_back(month);
            vectordepreciation.push_back(depreciation);
        }

        //cout << "payment: "<< payment << '\n';
        month = 0;

        for (i = 0; i < nmonths; i++){

            if (i == vectormonth[vec]){
                depreciation = vectordepreciation[vec];
                vec++;

            }
            carvalue = carvalue - carvalue*depreciation;

            if (loan > carvalue){
                //cout << "passou" << '\n';
                month++;
            }
            else{
                //cout<<"loan:"<< loan << "carvalue: "<< carvalue << '\n';
                break;
            }


            //cout << "loan:"<<loan << '\n';
            //cout << "carvalue" <<carvalue<< '\n';

            loan = loan - payment;




        }

        if(month == 1){
            cout << "1 month" << "\n";
        }
        else{
            cout << month << " months" << "\n";
        }



    }

    return 0;
}
