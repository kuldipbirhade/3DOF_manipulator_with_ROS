from setuptools import find_packages
from setuptools import setup

setup(
    name='myroboticarm_remote',
    version='0.0.0',
    packages=find_packages(
        include=('myroboticarm_remote', 'myroboticarm_remote.*')),
)
