# python module を import する

```boost::python::import``` 関数を使う。

### 構文
```cpp
namespace boost::python
{
    object import(str name);
}
```

### 具体例
```cpp
#include <boost/python.hpp>
namespace python = boost::python;

python::object factorial(int n)
{
    python::object math_module = python::import("math");
    python::object math_factorial = math_module.attr("factorial");
    return math_factorial(n);
}
```

### 参考
- https://github.com/boostorg/python/blob/master/include/boost/python/import.hpp
- https://docs.python.jp/3/library/math.html
