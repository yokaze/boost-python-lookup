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
