//
//  list_demo.cpp
//  boost-python-lookup
//
//  Copyright (C) 2017 Rue Yokaze
//  Distributed under the MIT License.
//
#include <boost/python.hpp>

namespace python = boost::python;

python::object make_list()
{
    python::list li;
    li.append(1);
    li.append(2.3);
    li.append("test");
    return li;
}

BOOST_PYTHON_MODULE(list_demo)
{
    python::def("make_list", make_list);
}
