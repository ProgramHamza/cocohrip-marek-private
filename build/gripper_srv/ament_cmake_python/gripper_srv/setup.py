from setuptools import find_packages
from setuptools import setup

setup(
    name='gripper_srv',
    version='0.0.0',
    packages=find_packages(
        include=('gripper_srv', 'gripper_srv.*')),
)
