//
//  extract_demo.cpp
//  boost-python-lookup
//
//  Copyright (C) 2017 Rue Yokaze
//  Distributed under the MIT License.
//
#include <boost/python.hpp>
#include <string>

namespace python = boost::python;
using std::string;

void print_int(python::object obj)
{
    int value = python::extract<int>(obj);
    printf("%d\n", value);
}

void print_str(python::object obj)
{
    string value = python::extract<string>(obj);
    printf("%s\n", value.c_str());
}

BOOST_PYTHON_MODULE(extract_demo)
{
    python::def("print_int", print_int);
    python::def("print_str", print_str);
}
