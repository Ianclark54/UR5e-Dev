from setuptools import find_packages
from setuptools import setup

setup(
    name='ur5e_waypoint_mover',
    version='1.0.0',
    packages=find_packages(
        include=('ur5e_waypoint_mover', 'ur5e_waypoint_mover.*')),
)
