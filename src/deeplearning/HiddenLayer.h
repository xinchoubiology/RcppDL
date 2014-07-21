#ifndef HIDDEN_H_
#define HIDDEN_H_

#include <iostream>
#include <math.h>

#include "utils.h"

class HiddenLayer
{

public:
    int N;
    int n_in;
    int n_out;
    double **W;
    double *b;
    HiddenLayer(int, int, int, double**, double*);
    ~HiddenLayer();
    double output(int*, double*, double);
    void sample_h_given_v(int*, int*);
};

#endif
