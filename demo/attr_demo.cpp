//
//  attr_demo.cpp
//  boost-python-lookup
//
//  Copyright (C) 2017 Rue Yokaze
//  Distributed under the MIT License.
//
#include <stdio.h>
#include <boost/python.hpp>
#include <string>

namespace python = boost::python;
using std::string;

void print_str(python::object obj)
{
    python::object string_attribute = obj.attr("__str__");
    string expression = python::extract<string>(string_attribute());
    printf("%s\n", expression.c_str());
}

BOOST_PYTHON_MODULE(attr_demo)
{
    python::def("print_str", print_str);
}
