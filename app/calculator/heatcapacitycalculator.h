#ifndef HEATCAPACITYCALCULATOR_H
#define HEATCAPACITYCALCULATOR_H

#include "calculator.h"

class HeatCapacityCalculator : public Calculator
{
public:
    HeatCapacityCalculator(DataStorage * storage);
    double calculate() override;
private:
    void Tczh() ;
     void Tras() ;
};

#endif // HEATCAPACITYCALCULATOR_H
