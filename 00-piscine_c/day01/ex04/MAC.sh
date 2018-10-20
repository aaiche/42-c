#!/bin/sh

ifconfig -a  | egrep ether | sed -e "s/\(.*\)ether //" | sed "s/ $//"
