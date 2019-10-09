#!/usr/bin/env python

import rospy


def main():
    rospy.init_node("a_node")

    while rospy.is_shutdown() == False:
        rospy.loginfo("a_node")
        rospy.sleep(1)


if __name__ == '__main__':
    main()
