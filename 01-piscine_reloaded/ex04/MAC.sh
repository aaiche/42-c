#!/bin/sh
ifconfig -a | egrep ether | sed -e "s/[[:space:]]ether //" | sed -e "s/[[:space:]]$//" 
