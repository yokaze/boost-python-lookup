# list のインスタンスを作る
```boost::python::list```, ```list.append``` を使う。

### 構文
```cpp
namespace boost::python
{
    class list
    {
    public:
        void append(const object&);
    };
}
```

### 具体例
```cpp
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
```

### ソースコード
- https://github.com/yokaze/boost-python-lookup/tree/master/demo/list_demo.cpp

### 参考
- https://github.com/boostorg/python/blob/master/include/boost/python/list.hpp
