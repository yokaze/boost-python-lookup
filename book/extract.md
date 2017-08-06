# object を C++ の型に変換する
```boost::python::extract``` を使う。```extract``` は関数ではないが、関数のようにふるまう。

### 構文
```cpp
namespace boost::python
{
    template<class T>
    struct extract
    {
        extract(const api::object&);
        operator result_type() const;
    };
}
```

### 具体例
```cpp
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
```

### ソースコード
- https://github.com/yokaze/boost-python-lookup/tree/master/demo/extract_demo.cpp

### 参考
- https://github.com/boostorg/python/blob/master/include/boost/python/extract.hpp
