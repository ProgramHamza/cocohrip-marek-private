from setuptools import find_packages
from setuptools import setup

setup(
    name='checkers_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('checkers_msgs', 'checkers_msgs.*')),
)
