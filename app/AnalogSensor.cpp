/**
 * @file AnalogSensor.cpp
 * @author Bharadwaj Chukkala (bchukkal@umd.edu)
 * @brief 
 * @version 0.1
 * @date 2022-10-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "../include/AnalogSensor.hpp"
#include <numeric>
#include <vector>

AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples) {
}

AnalogSensor::~AnalogSensor() {
}

int AnalogSensor::Read() {
    std::vector<int> *readings = new std::vector<int>(mSamples, 10);

    double result = std::accumulate(readings->begin(), readings->end(), 0.0) / readings->size();
    delete readings;
    return result;
}


