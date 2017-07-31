//
//  hello_demo.cpp
//  boost-python-lookup
//
//  Copyright (C) 2017 Rue Yokaze
//  Distributed under the MIT License.
//
#include <boost/python.hpp>

namespace python = boost::python;

void hello()
{
    printf("Hello World!\n");
}

BOOST_PYTHON_MODULE(hello_demo)
{
    python::def("hello", hello);
}
