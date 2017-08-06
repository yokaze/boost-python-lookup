# list, tuple の長さを取得する

```boost::python::len``` 関数を使う。

### 構文
```cpp
namespace boost::python
{
    ssize_t len(object& obj);
}
```

### 具体例
```cpp
#include <boost/python.hpp>
namespace python = boost::python;

int get_list_length(python::list obj)
{
    return python::len(obj);
}
```

オブジェクトが ```__len__``` 属性を持っていれば、```list```, ```tuple``` 以外の型でも使うことができる。

### ソースコード
- https://github.com/yokaze/boost-python-lookup/tree/master/demo/len_demo.cpp

### 参考
- https://github.com/boostorg/python/blob/master/include/boost/python/object.hpp
