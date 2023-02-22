#include <iostream>
#include <ModulesTkachenkoOY.h>
#include <cmath>
#define CASES_COUNT 3

using namespace std;

int main()
{
    bool passed = true;
    float output[CASES_COUNT] = {9.14, 4.14, -0.19};
    float input[CASES_COUNT] = {s_calculation(1, 2, 2), s_calculation(0,0,0), s_calculation(-1,-2,-2)};
    for(int i=0;i<CASES_COUNT;i++){
        if (output[i] == input[i]){
            cout <<"("<<output[i] <<"="<< input[i]<<") " << i+1 << " case status: passed" << endl;
        }
        else{
            passed = false;
            cout <<"("<<output[i] <<"="<< input[i]<<") "<< i+1 << " case status: failed" <<endl;
        }
    }
    if (passed){
        cout << endl << "Test driver status: passed"<< endl;
    }
    else{
        cout << endl << "Test driver status: failed"<< endl;
    }
    return 0;
}
