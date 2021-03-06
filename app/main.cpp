/**
 *  @file      main.cpp
 *  @brief     Program main
 *  @details   This file is used to implement the PID class and calculate the velocity as a result of a PID controller
 *  @author    Patrick Nolan (patnolan33)
 *  @copyright GNU Public License.
 */

#include <iostream>
#include <pid.hpp>
#include <memory>

int main()
{

  std::shared_ptr<PID> pid = std::make_shared < PID > (0.1, 0.01, 0.5, 1);

  double velocity = pid->compute(1, 2);

  std::cout << "Computed velocity: " << velocity << std::endl;

  return 0;
}
