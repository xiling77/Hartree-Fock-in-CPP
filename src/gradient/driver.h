#ifndef GRADIENT_DRIVER_H
#define GRADIENT_DRIVER_H

#include <functional>
#include <armadillo>
#include <json.hpp>

#include "geometry/geometry.h"



namespace hfincpp::gradient {

using EnergyDriver = std::function<double(const geometry::Atoms &)>;
using GradientDriver =
    std::function<std::pair<double, arma::mat>(const geometry::Atoms &)>;

}

#endif //GRADIENT_DRIVER_H
