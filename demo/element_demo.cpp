//
//  element_demo.cpp
//  boost-python-lookup
//
//  Copyright (C) 2017 Rue Yokaze
//  Distributed under the MIT License.
//
#include <boost/python.hpp>

namespace python = boost::python;

python::object get_second_element(python::list obj)
{
    return obj[1];
}

BOOST_PYTHON_MODULE(element_demo)
{
    python::def("get_second_element", get_second_element);
}
