//
//  import_demo.cpp
//  boost-python-lookup
//
//  Copyright (C) 2017 Rue Yokaze
//  Distributed under the MIT License.
//
#include <boost/python.hpp>

namespace python = boost::python;

python::object factorial(int n)
{
    python::object math_module = python::import("math");
    python::object math_factorial = math_module.attr("factorial");
    return math_factorial(n);
}

BOOST_PYTHON_MODULE(import_demo)
{
    python::def("factorial", factorial);
}
