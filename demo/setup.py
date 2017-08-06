import os
import platform
import subprocess
import sys
from distutils.core import setup, Extension

include_dirs = []
library_dirs = []

if (platform.system() == 'Darwin'):
    try:
        subprocess.check_call(['which', 'brew'], stdout=subprocess.PIPE)
        include_dirs = ['/usr/local/include']
        library_dirs = ['/usr/local/lib']
    finally:
        pass

modules = []
modules.append(['attr_demo', 'attr_demo.cpp'])
modules.append(['element_demo', 'element_demo.cpp'])
modules.append(['extract_demo', 'extract_demo.cpp'])
modules.append(['import_demo', 'import_demo.cpp'])
modules.append(['len_demo', 'len_demo.cpp'])
modules.append(['list_demo', 'list_demo.cpp'])
modules.append(['tuple_demo', 'tuple_demo.cpp'])

extensions = []
for module in modules:
    mod_name = module[0]
    mod_source = module[1]
    ex_module = Extension(
        mod_name,
        sources=[mod_source],
        libraries=['boost_python'],
        include_dirs=include_dirs,
        library_dirs=library_dirs,
        extra_compile_args=['-std=c++11'],
    )
    extensions.append(ex_module)

setup(name="demo", version="1.0", ext_modules=extensions)
