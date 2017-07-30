# list, tuple の要素にアクセスする

C++ の添字演算子をそのまま使うことができる。

### 具体例
```cpp
#include <boost/python.hpp>
namespace python = boost::python;

python::object get_second_element(python::list obj)
{
    return obj[1];
}
```

### 参考
- https://github.com/boostorg/python/blob/master/include/boost/python/object_core.hpp
