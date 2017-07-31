# 拡張 module の作成
ライブラリを C++ で記述し、```setup.py``` を準備する。

### 具体例
```cpp
#include <boost/python.hpp>
namespace python = boost::python;

void hello()
{
    printf("Hello World!\n");
}

BOOST_PYTHON_MODULE(hello_demo)
{
    python::def("hello", hello);
}
```

バイナリのビルドに必要な ```setup.py``` は以下のように記述する。
```python
# -*- coding: utf-8 -*-
import os
import platform
import subprocess
import sys
from distutils.core import setup, Extension

if (platform.system() == 'Darwin'):
    try:
        # Mac, Homebrew 導入済みでかつ、PATH が設定されていない場合に対処する。
        # PATH が設定されている場合、このコードは必要ない。
        subprocess.check_call(['which', 'brew'], stdout=subprocess.PIPE)
        include_dirs = ['/usr/local/include']
        library_dirs = ['/usr/local/lib']
    finally:
        pass

# 拡張モジュールの設定を記述する。
# 追加の include/library directory などが指定できる。
ex_module = Extension(
    'hello_demo',
    sources=['hello_demo.cpp'],
    libraries=['boost_python'],
    include_dirs=include_dirs,
    library_dirs=library_dirs,
    extra_compile_args=['-std=c++11'],
)

setup(name="demo", version="1.0", ext_modules=[ex_module])
```

また、以下のような ```makefile``` を作成しておくと便利である。
```
default:
	python setup.py build_ext -i -f
```

```-i``` は in-place （同じディレクトリにバイナリを作成）、
```-f``` は force （バイナリファイルの上書き）を意味する。

### 実行例
```
$ make
python setup.py build_ext -i -f
running build_ext
building 'hello_demo' extension
...
$ python
>>> import hello_demo
>>> hello_demo.hello()
Hello World!
```

### ソースコード
- https://github.com/yokaze/boost-python-lookup/tree/master/demo/hello

### 参考
- https://docs.python.jp/3/extending/building.html
