//
//  len_demo.cpp
//  boost-python-lookup
//
//  Copyright (C) 2017 Rue Yokaze
//  Distributed under the MIT License.
//
#include <boost/python.hpp>

namespace python = boost::python;

ssize_t get_object_length(python::object obj)
{
    return python::len(obj);
}

ssize_t get_list_length(python::list obj)
{
    return python::len(obj);
}

ssize_t get_tuple_length(python::tuple obj)
{
    return python::len(obj);
}

BOOST_PYTHON_MODULE(len_demo)
{
    python::def("get_object_length", get_object_length);
    python::def("get_list_length", get_list_length);
    python::def("get_tuple_length", get_tuple_length);
}
