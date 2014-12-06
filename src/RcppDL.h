#ifndef RCPPDL_H_
#define RCPPDL_H_

#include <vector>

#include "util.h"

#include "deeplearning/dA.h"
#include "deeplearning/DBN.h"
#include "deeplearning/HiddenLayer.h"
#include "deeplearning/LogisticRegression.h"
#include "deeplearning/RBM.h"
#include "deeplearning/SdA.h"

class RcppSDA {

  public:

    RcppSDA();
    void init(SEXP x, SEXP y, SEXP hidden);
    void pretrain();
    void finetune();
    void predict(SEXP test);
    Rcpp::List show();

  private:

    int ** train_X;
    int ** train_Y;
    double pretrain_lr;
    double corruption_level;
    int pretraining_epochs;
    double finetune_lr;
    int finetune_epochs;
    int train_N;
    int n_ins;
    int n_outs;
    std::vector<int> hidden_layer_sizes;

};

#endif
