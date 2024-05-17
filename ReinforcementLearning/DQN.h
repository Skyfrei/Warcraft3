#ifndef DQN_H
#define DQN_H
#include <torch/autograd.h>
#include <torch/nn.h>
#include <torch/optim.h>
#include <torch/torch.h>
#include <vector>

#include "../Race/Unit/Unit.h"
#include "ReplayMemory.h"
#include <cmath>
#include <random>

class DQN : public torch::nn::Module {
 public:
  DQN(){}
  DQN(int inpSize, int actionNum);
  torch::Tensor Forward(torch::Tensor x);

 private:
  void OptimizeModel();
  at::Tensor SelectAction(State state, DQN policy, torch::Device device); // gotta return an action
  torch::Tensor TurnStateInInput(State state);

 private:
  float gamma = 0.92f;
  int episodeNumber = 50;
  int stepsDone = 0;
  int inputSize = 0;
  float startEpsilon = 0.9f;
  float endEpsilon = 0.05f;
  float epsilonDecay = 1000.0f;
  float learningRate = 0.001f;
  int actionSize = 0;

  torch::nn::Linear layer1{nullptr}, layer2{nullptr}, layer3{nullptr};
};

#endif
