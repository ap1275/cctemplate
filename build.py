#!/usr/bin/env python3

import os
import subprocess

if os.name == 'nt':
    subprocess.check_call(['python','tools/fresh_build.py'])
if os.name == 'posix':
    subprocess.check_call(['python3','tools/fresh_build.py'])
