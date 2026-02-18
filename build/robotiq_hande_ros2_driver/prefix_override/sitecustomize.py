import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/marek/amavet_ws/install/robotiq_hande_ros2_driver'
