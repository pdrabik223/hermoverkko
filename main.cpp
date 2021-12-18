//
// Created by piotr on 18/12/2021.
//
#include "neural_net/neural_net.h"


int main() {
  NeuralNet nn(1, 2);
  matrix::Matrix<double> input(1,1);
  matrix::Matrix<double> expected(1,1);

  nn.FeedForward(matrix::Matrix<double>(1, 1));


}
