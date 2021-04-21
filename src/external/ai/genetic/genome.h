#pragma once

#include "../neural_network.h"

class Genome
{
public:
    Genome(const NeuralNetworkStructure& structure);
    Genome(const NeuralNetwork& neuralNetwork);

protected:
    NeuralNetwork neuralNetwork;
};