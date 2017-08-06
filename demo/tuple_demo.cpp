//
//  tuple_demo.cpp
//  boost-python-lookup
//
//  Copyright (C) 2017 Rue Yokaze
//  Distributed under the MIT License.
//
#include <boost/python.hpp>

namespace python = boost::python;

python::object make_tuple()
{
    return python::make_tuple(1, 2.3, "test");
}

BOOST_PYTHON_MODULE(tuple_demo)
{
    python::def("make_tuple", make_tuple);
}
