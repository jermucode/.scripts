#!/bin/bash
myval=`cat /sys/class/backlight/intel_backlight/brightness`
newval=`expr $myval - 40`
echo $newval > /sys/class/backlight/intel_backlight/brightness
exit

