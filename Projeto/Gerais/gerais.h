//
// Created by LABCFD on 5/27/2024.
//

#ifndef PROJETO_GERAIS_H
#define PROJETO_GERAIS_H

#include <cmath>
#include <iostream>
#include <vector>
#include <stdexcept>
#include <functional>


#include "base.h"

std::vector<double> linspace(double start, double stop, int n = 50);
std::vector<double> transform(std::vector<double> x, std::function<double(double)> f);

#endif //PROJETO_GERAIS_H
