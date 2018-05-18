#!/usr/bin/env python3

import os
import shutil

os.mkdir('build')
os.chdir('build')
if os.name == 'posix':
    os.system('cmake ..')
    os.system('make')
    os.system('./test/main_test')
    os.chdir('..')
    os.system('rm -rf build/')
if os.name == 'nt':
    os.system('cmake .. -G "Visual Studio 15 Win64')
    os.system('msbuild libra.sln')
    shutil.copy('src/Debug/libra.dll', 'test/Debug/libra.dll')
    os.system('test/Debug/main_test.exe')
    os.chdir('..')
    shutil.rmtree("build")
