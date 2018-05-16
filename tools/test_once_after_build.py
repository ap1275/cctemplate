#!/usr/bin/env python3

import os

os.mkdir('build')
os.chdir('build')
if os.name == 'posix':
    os.system('cmake ..')
    os.system('make')
    os.system('./test/main_test')
os.chdir('..')
if os.name == 'posix':
    os.system('rm -rf build/')
