from setuptools import find_packages
from setuptools import setup

setup(
    name='myroboticarm_utils',
    version='0.0.0',
    packages=find_packages(
        include=('myroboticarm_utils', 'myroboticarm_utils.*')),
)
