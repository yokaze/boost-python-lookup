# tuple のインスタンスを作る

```boost::python::make_tuple``` 関数を使う。

### 構文
```cpp
namespace boost::python
{
    // この表記はオリジナルの実装と一部ことなる。
    // 詳細は <boost/python/detail/make_tuple.hpp> を参照のこと。
    template<class... Ts>
    tuple make_tuple(const Ts&...);
}
```

### 具体例
```cpp
#include <boost/python.hpp>
namespace python = boost::python;

python::object make_tuple()
{
    return python::make_tuple(1, 2.3, "test");
}
```

### ソースコード
- https://github.com/yokaze/boost-python-lookup/tree/master/demo/tuple_demo.cpp

### 参考
- https://github.com/boostorg/python/blob/master/include/boost/python/detail/make_tuple.hpp
