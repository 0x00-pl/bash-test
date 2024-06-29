#!/bin/bash

function f(){
 sleep $1
 echo $1
}


while [ ! -z $1 ]
do
 f $1 &
 shift
done
wait

