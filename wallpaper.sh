#!/bin/bash

my_array=(~/wallpapers/*)
feh --bg-scale ${my_array[$(( $RANDOM % ${#my_array[@]}))]}
#feh --bg-scale wallpapers/space1.jpg
st
