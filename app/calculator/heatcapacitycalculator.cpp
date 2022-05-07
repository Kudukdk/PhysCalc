#include "heatcapacitycalculator.h"
#include "../exceptions/dataexceptions.h"

HeatCapacityCalculator::HeatCapacityCalculator(DataStorage * storage) : Calculator(storage)
{

}
void HeatCapacityCalculator::Tczh(){
   // $("T_e") = T_b+T_b*((pow((3,14),(R_a)/(C_pms_A))-1)*(1/E);
}     $("T_e") = $("T_b")+$("T_b")*((pow((3,14),(($("R"))/($("C_pms_A")))))-1)*($("E"));

void HeatCapacityCalculator::Tras(){
    $("T_e") = $("T_b")+$("T_b")*(1-(pow((3,14),(($("R"))/($("C_pms_G")))))*($("E"));

}

double HeatCapacityCalculator::calculate()
{
    return 0;
}
