#!/bin/bash
for (( c=1; c<=99; c++ ))
do
   if [ $(( c % 2 )) != 0 ]; then
        echo $c
   fi
done