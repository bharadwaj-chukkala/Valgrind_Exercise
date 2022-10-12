/**
 * @file AnalogSensor.hpp
 * @author Bharadwaj Chukkala (bchukkal@umd.edu)
 * @brief 
 * @version 0.1
 * @date 2022-10-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#pragma once

#include <iostream>

class AnalogSensor {
 public:
  explicit AnalogSensor(unsigned int samples);
    ~AnalogSensor();
    int Read();
 private:
    unsigned int mSamples;
};
