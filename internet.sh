#!/bin/bash
iwctl station wlan0 scan
iwctl station wlan0 get-networks
iwctl station wlan0 connect iPhoneX
exit
