//
//  main.cpp
//  QL
//
//  Created by Flavio Serra on 25/02/2019.
//  Copyright © 2019 Flavio Serra. All rights reserved.
//

#include <iostream>
#include "ModelParams.hpp"
#include "Model.hpp"
#include "observable.hpp"

typedef boost::shared_ptr<const ModelParams> ModelParamsCPtr;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    double mr = 0.1;
    double vol = 10.;
    ModelParamsCPtr modelParams( new ModelParams(mr, vol));
    Model myModel(modelParams);
    Observable obs(2.);
    double val = obs.getFwd();
    std::cout << "Observed value is:" << val << "\n";
    
    return 0;
}
