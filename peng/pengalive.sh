#!/bin/sh
Ret=-2

until   peng -c "$1" 
	do
	sleep 10
done
