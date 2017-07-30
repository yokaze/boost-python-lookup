# object の属性を取得する

```attr``` 関数を使う。

[object を C++ の型に変換する](extract.md) も参照のこと。

### 構文
```cpp
namespace boost::python
{
    class object
    {
    public:
        const_object_attribute attr(const object&) const;
        object_attribute attr(const object&);
    }
}
```

### 具体例
```cpp
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
```

### 参考
- https://github.com/boostorg/python/blob/master/include/boost/python/object_core.hpp
